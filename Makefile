.PHONY: clean All

All:
	@echo "----------Building project:[ todo_cli - Release ]----------"
	@"$(MAKE)" -f  "todo_cli.mk"
clean:
	@echo "----------Cleaning project:[ todo_cli - Release ]----------"
	@"$(MAKE)" -f  "todo_cli.mk" clean
