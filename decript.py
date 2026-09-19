import sys

def xor_files(file1_path, file2_path):
    try:
        with open(file1_path, 'rb') as f1, open(file2_path, 'rb') as f2:
            data1 = f1.read()
            data2 = f2.read()
        
        min_length = min(len(data1), len(data2))
        xor_result = bytes(b1 ^ b2 for b1, b2 in zip(data1[:min_length], data2[:min_length]))
        
        with open("decriptado.out", "wb") as f_out:
            f_out.write(xor_result)
            
        print("Operação concluída com sucesso! Arquivo 'decriptado.out' gerado.")
        
    except FileNotFoundError as e:
        print(f"Erro: {e}")
    except Exception as e:
        print(f"Erro inesperado: {e}")

if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Uso: python script.py <arquivo1> <arquivo2>")
    else:
        xor_files(sys.argv[1], sys.argv[2])
