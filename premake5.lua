workspace "MyCodeExercises"
	configurations
	{
		"Debug"
	}
	architecture "x86"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "PAT"
	location "PAT"
	kind "ConsoleApp"
	language "C++"
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/**.h",
		"%{prj.name}/**.cpp"
	}

project "codeup"
	location "codeup"
	kind "ConsoleApp"
	language "C++"
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/**.h",
		"%{prj.name}/**.cpp"
	}
