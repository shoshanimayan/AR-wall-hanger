void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Free(System.Void*,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Free();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemClear(System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemClear();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemClear();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpy();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyReplicate(System.Void*,System.Void*,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyReplicate();

		//System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpyStride(System.Void*,System.Int32,System.Void*,System.Int32,System.Int32,System.Int32)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_MemCpyStride();

		//System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
		void Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();
		Register_Unity_Collections_LowLevel_Unsafe_UnsafeUtility_Malloc();

	//End Registrations for type : Unity.Collections.LowLevel.Unsafe.UnsafeUtility

	//Start Registrations for type : Unity.Jobs.JobHandle

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobs()
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobs();

		//System.Void Unity.Jobs.JobHandle::ScheduleBatchedJobsAndComplete(Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();
		Register_Unity_Jobs_JobHandle_ScheduleBatchedJobsAndComplete();

	//End Registrations for type : Unity.Jobs.JobHandle

	//Start Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

		//System.Boolean Unity.Jobs.LowLevel.Unsafe.JobsUtility::GetWorkStealingRange(Unity.Jobs.LowLevel.Unsafe.JobRanges&,System.Int32,System.Int32&,System.Int32&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_GetWorkStealingRange();

		//System.IntPtr Unity.Jobs.LowLevel.Unsafe.JobsUtility::CreateJobReflectionData(System.Type,System.Type,Unity.Jobs.LowLevel.Unsafe.JobType,System.Object,System.Object,System.Object)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_CreateJobReflectionData();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::ScheduleParallelFor_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,System.Int32,System.Int32,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_ScheduleParallelFor_Injected();

		//System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::Schedule_Injected(Unity.Jobs.LowLevel.Unsafe.JobsUtility/JobScheduleParameters&,Unity.Jobs.JobHandle&)
		void Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();
		Register_Unity_Jobs_LowLevel_Unsafe_JobsUtility_Schedule_Injected();

	//End Registrations for type : Unity.Jobs.LowLevel.Unsafe.JobsUtility

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Boolean UnityEngine.AnimationCurve::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Equals();
		Register_UnityEngine_AnimationCurve_Internal_Equals();

		//System.IntPtr UnityEngine.AnimationCurve::Internal_Create(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Internal_Create();
		Register_UnityEngine_AnimationCurve_Internal_Create();

		//System.Void UnityEngine.AnimationCurve::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_AnimationCurve_Internal_Destroy();
		Register_UnityEngine_AnimationCurve_Internal_Destroy();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Void UnityEngine.AsyncOperation::InternalDestroy(System.IntPtr)
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::get_stereoEnabled()
		void Register_UnityEngine_Camera_get_stereoEnabled();
		Register_UnityEngine_Camera_get_stereoEnabled();

		//System.Int32 UnityEngine.Camera::GetAllCamerasCount()
		void Register_UnityEngine_Camera_GetAllCamerasCount();
		Register_UnityEngine_Camera_GetAllCamerasCount();

		//System.Int32 UnityEngine.Camera::GetAllCamerasImpl(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCamerasImpl();
		Register_UnityEngine_Camera_GetAllCamerasImpl();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Camera/MonoOrStereoscopicEye,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
		void Register_UnityEngine_Camera_set_clearFlags();
		Register_UnityEngine_Camera_set_clearFlags();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.CameraRaycastHelper

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry2D_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.CameraRaycastHelper::RaycastTry_Injected(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();
		Register_UnityEngine_CameraRaycastHelper_RaycastTry_Injected();

	//End Registrations for type : UnityEngine.CameraRaycastHelper

	//Start Registrations for type : UnityEngine.Collider

		//System.Void UnityEngine.Collider::set_enabled(System.Boolean)
		void Register_UnityEngine_Collider_set_enabled();
		Register_UnityEngine_Collider_set_enabled();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.Cubemap

		//System.Boolean UnityEngine.Cubemap::Internal_CreateImpl(UnityEngine.Cubemap,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Cubemap_Internal_CreateImpl();
		Register_UnityEngine_Cubemap_Internal_CreateImpl();

	//End Registrations for type : UnityEngine.Cubemap

	//Start Registrations for type : UnityEngine.CubemapArray

		//System.Boolean UnityEngine.CubemapArray::Internal_CreateImpl(UnityEngine.CubemapArray,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_CubemapArray_Internal_CreateImpl();
		Register_UnityEngine_CubemapArray_Internal_CreateImpl();

	//End Registrations for type : UnityEngine.CubemapArray

	//Start Registrations for type : UnityEngine.CullingGroup

		//System.Void UnityEngine.CullingGroup::FinalizerFailure()
		void Register_UnityEngine_CullingGroup_FinalizerFailure();
		Register_UnityEngine_CullingGroup_FinalizerFailure();

	//End Registrations for type : UnityEngine.CullingGroup

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,UnityEngine.LogOption,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

		//System.Boolean UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem::BuiltinUpdate()
		void Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();
		Register_UnityEngine_Experimental_Rendering_BuiltinRuntimeReflectionSystem_BuiltinUpdate();

	//End Registrations for type : UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem

	//Start Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsCompressedTextureFormat(UnityEngine.TextureFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsCompressedTextureFormat();

		//System.Boolean UnityEngine.Experimental.Rendering.GraphicsFormatUtility::IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_IsSRGBFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_RenderTextureFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.Experimental.Rendering.GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat,System.Boolean)
		void Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();
		Register_UnityEngine_Experimental_Rendering_GraphicsFormatUtility_GetGraphicsFormat_Native_TextureFormat();

	//End Registrations for type : UnityEngine.Experimental.Rendering.GraphicsFormatUtility

	//Start Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

		//System.Void UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings::ScriptingDirtyReflectionSystemInstance()
		void Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();
		Register_UnityEngine_Experimental_Rendering_ScriptableRuntimeReflectionSystemSettings_ScriptingDirtyReflectionSystemInstance();

	//End Registrations for type : UnityEngine.Experimental.Rendering.ScriptableRuntimeReflectionSystemSettings

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gradient

		//System.Boolean UnityEngine.Gradient::Internal_Equals(System.IntPtr)
		void Register_UnityEngine_Gradient_Internal_Equals();
		Register_UnityEngine_Gradient_Internal_Equals();

		//System.IntPtr UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.GUILayer

		//UnityEngine.GUIElement UnityEngine.GUILayer::HitTest_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_GUILayer_HitTest_Injected();
		Register_UnityEngine_GUILayer_HitTest_Injected();

	//End Registrations for type : UnityEngine.GUILayer

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Void UnityEngine.Input::GetTouch_Injected(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_GetTouch_Injected();
		Register_UnityEngine_Input_GetTouch_Injected();

		//System.Void UnityEngine.Input::get_mousePosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_get_mousePosition_Injected();
		Register_UnityEngine_Input_get_mousePosition_Injected();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.IntegratedSubsystem

		//System.Void UnityEngine.IntegratedSubsystem::SetHandle(UnityEngine.IntegratedSubsystem)
		void Register_UnityEngine_IntegratedSubsystem_SetHandle();
		Register_UnityEngine_IntegratedSubsystem_SetHandle();

		//System.Void UnityEngine.IntegratedSubsystem::Start()
		void Register_UnityEngine_IntegratedSubsystem_Start();
		Register_UnityEngine_IntegratedSubsystem_Start();

		//System.Void UnityEngine.IntegratedSubsystem::Stop()
		void Register_UnityEngine_IntegratedSubsystem_Stop();
		Register_UnityEngine_IntegratedSubsystem_Stop();

	//End Registrations for type : UnityEngine.IntegratedSubsystem

	//Start Registrations for type : UnityEngine.Internal_SubsystemDescriptors

		//System.IntPtr UnityEngine.Internal_SubsystemDescriptors::Create(System.IntPtr)
		void Register_UnityEngine_Internal_SubsystemDescriptors_Create();
		Register_UnityEngine_Internal_SubsystemDescriptors_Create();

		//System.String UnityEngine.Internal_SubsystemDescriptors::GetId(System.IntPtr)
		void Register_UnityEngine_Internal_SubsystemDescriptors_GetId();
		Register_UnityEngine_Internal_SubsystemDescriptors_GetId();

	//End Registrations for type : UnityEngine.Internal_SubsystemDescriptors

	//Start Registrations for type : UnityEngine.iOS.NotificationHelper

		//System.Void UnityEngine.iOS.NotificationHelper::DestroyLocal(System.IntPtr)
		void Register_UnityEngine_iOS_NotificationHelper_DestroyLocal();
		Register_UnityEngine_iOS_NotificationHelper_DestroyLocal();

		//System.Void UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)
		void Register_UnityEngine_iOS_NotificationHelper_DestroyRemote();
		Register_UnityEngine_iOS_NotificationHelper_DestroyRemote();

	//End Registrations for type : UnityEngine.iOS.NotificationHelper

	//Start Registrations for type : UnityEngine.Light

		//System.Single UnityEngine.Light::get_bounceIntensity()
		void Register_UnityEngine_Light_get_bounceIntensity();
		Register_UnityEngine_Light_get_bounceIntensity();

		//System.Single UnityEngine.Light::get_intensity()
		void Register_UnityEngine_Light_get_intensity();
		Register_UnityEngine_Light_get_intensity();

		//System.Single UnityEngine.Light::get_range()
		void Register_UnityEngine_Light_get_range();
		Register_UnityEngine_Light_get_range();

		//System.Single UnityEngine.Light::get_spotAngle()
		void Register_UnityEngine_Light_get_spotAngle();
		Register_UnityEngine_Light_get_spotAngle();

		//System.Void UnityEngine.Light::get_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_get_color_Injected();
		Register_UnityEngine_Light_get_color_Injected();

		//UnityEngine.LightShadows UnityEngine.Light::get_shadows()
		void Register_UnityEngine_Light_get_shadows();
		Register_UnityEngine_Light_get_shadows();

		//UnityEngine.LightType UnityEngine.Light::get_type()
		void Register_UnityEngine_Light_get_type();
		Register_UnityEngine_Light_get_type();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LineRenderer

		//System.Single UnityEngine.LineRenderer::get_widthMultiplier()
		void Register_UnityEngine_LineRenderer_get_widthMultiplier();
		Register_UnityEngine_LineRenderer_get_widthMultiplier();

		//System.Void UnityEngine.LineRenderer::SetPosition_Injected(System.Int32,UnityEngine.Vector3&)
		void Register_UnityEngine_LineRenderer_SetPosition_Injected();
		Register_UnityEngine_LineRenderer_SetPosition_Injected();

		//System.Void UnityEngine.LineRenderer::set_positionCount(System.Int32)
		void Register_UnityEngine_LineRenderer_set_positionCount();
		Register_UnityEngine_LineRenderer_set_positionCount();

		//System.Void UnityEngine.LineRenderer::set_widthMultiplier(System.Single)
		void Register_UnityEngine_LineRenderer_set_widthMultiplier();
		Register_UnityEngine_LineRenderer_set_widthMultiplier();

	//End Registrations for type : UnityEngine.LineRenderer

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::CreateWithString(UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithString();
		Register_UnityEngine_Material_CreateWithString();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.Mathf

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Mesh

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,System.Array,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshCollider

		//System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshCollider_set_sharedMesh();
		Register_UnityEngine_MeshCollider_set_sharedMesh();

	//End Registrations for type : UnityEngine.MeshCollider

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_sharedMesh();
		Register_UnityEngine_MeshFilter_set_sharedMesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::Release()
		void Register_UnityEngine_Networking_CertificateHandler_Release();
		Register_UnityEngine_Networking_CertificateHandler_Release();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&)
		void Register_UnityEngine_ParticleSystem_EmitOld_Internal();
		Register_UnityEngine_ParticleSystem_EmitOld_Internal();

		//System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Injected();
		Register_UnityEngine_ParticleSystem_Emit_Injected();

		//System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32)
		void Register_UnityEngine_ParticleSystem_Emit_Internal();
		Register_UnityEngine_ParticleSystem_Emit_Internal();

		//System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32,System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticles();
		Register_UnityEngine_ParticleSystem_SetParticles();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startColor_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxGradient&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startColor_Injected();

		//System.Void UnityEngine.ParticleSystem/MainModule::get_startSize_Injected(UnityEngine.ParticleSystem/MainModule&,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();
		Register_UnityEngine_ParticleSystem_MainModule_get_startSize_Injected();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.ParticleSystemRenderer

		//System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[])
		void Register_UnityEngine_ParticleSystemRenderer_GetMeshes();
		Register_UnityEngine_ParticleSystemRenderer_GetMeshes();

	//End Registrations for type : UnityEngine.ParticleSystemRenderer

	//Start Registrations for type : UnityEngine.Physics

		//System.Void UnityEngine.Physics::get_defaultPhysicsScene_Injected(UnityEngine.PhysicsScene&)
		void Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();
		Register_UnityEngine_Physics_get_defaultPhysicsScene_Injected();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_Internal_RaycastAll_Injected();
		Register_UnityEngine_Physics_Internal_RaycastAll_Injected();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.PhysicsScene

		//System.Boolean UnityEngine.PhysicsScene::Internal_RaycastTest_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastTest_Injected();

		//System.Boolean UnityEngine.PhysicsScene::Internal_Raycast_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();
		Register_UnityEngine_PhysicsScene_Internal_Raycast_Injected();

		//System.Int32 UnityEngine.PhysicsScene::Internal_RaycastNonAlloc_Injected(UnityEngine.PhysicsScene&,UnityEngine.Ray&,UnityEngine.RaycastHit[],System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();
		Register_UnityEngine_PhysicsScene_Internal_RaycastNonAlloc_Injected();

	//End Registrations for type : UnityEngine.PhysicsScene

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Boolean UnityEngine.PlayerConnectionInternal::TrySendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();
		Register_UnityEngine_PlayerConnectionInternal_TrySendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.QualitySettings

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

		//System.Void UnityEngine.Quaternion::LookRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_LookRotation_Injected();
		Register_UnityEngine_Quaternion_LookRotation_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.RemoteConfigSettings

		//System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();
		Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();

	//End Registrations for type : UnityEngine.RemoteConfigSettings

	//Start Registrations for type : UnityEngine.Renderer

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Boolean UnityEngine.Rendering.CommandBuffer::ValidateAgainstExecutionFlags(UnityEngine.Rendering.CommandBufferExecutionFlags,UnityEngine.Rendering.CommandBufferExecutionFlags)
		void Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();
		Register_UnityEngine_Rendering_CommandBuffer_ValidateAgainstExecutionFlags();

		//System.IntPtr UnityEngine.Rendering.CommandBuffer::InitBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::Blit_Texture_Injected(UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Int32,System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();
		Register_UnityEngine_Rendering_CommandBuffer_Blit_Texture_Injected();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.Rendering.GraphicsSettings

		//System.Boolean UnityEngine.Rendering.GraphicsSettings::get_lightsUseLinearIntensity()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();
		Register_UnityEngine_Rendering_GraphicsSettings_get_lightsUseLinearIntensity();

		//UnityEngine.ScriptableObject UnityEngine.Rendering.GraphicsSettings::get_INTERNAL_renderPipelineAsset()
		void Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_renderPipelineAsset();
		Register_UnityEngine_Rendering_GraphicsSettings_get_INTERNAL_renderPipelineAsset();

	//End Registrations for type : UnityEngine.Rendering.GraphicsSettings

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_GetDescriptor_Injected();
		Register_UnityEngine_RenderTexture_GetDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::SetRenderTextureDescriptor_Injected(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();
		Register_UnityEngine_RenderTexture_SetRenderTextureDescriptor_Injected();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_graphicsFormat(UnityEngine.Experimental.Rendering.GraphicsFormat)
		void Register_UnityEngine_RenderTexture_set_graphicsFormat();
		Register_UnityEngine_RenderTexture_set_graphicsFormat();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//UnityEngine.ScreenOrientation UnityEngine.Screen::GetScreenOrientation()
		void Register_UnityEngine_Screen_GetScreenOrientation();
		Register_UnityEngine_Screen_GetScreenOrientation();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type,System.Boolean)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//UnityEngine.Shader UnityEngine.Shader::Find(System.String)
		void Register_UnityEngine_Shader_Find();
		Register_UnityEngine_Shader_Find();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();

		//UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();

		//System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

	//Start Registrations for type : UnityEngine.SubsystemManager

		//System.Void UnityEngine.SubsystemManager::DestroyInstance_Internal(System.IntPtr)
		void Register_UnityEngine_SubsystemManager_DestroyInstance_Internal();
		Register_UnityEngine_SubsystemManager_DestroyInstance_Internal();

		//System.Void UnityEngine.SubsystemManager::ReportSingleSubsystemAnalytics(System.String)
		void Register_UnityEngine_SubsystemManager_ReportSingleSubsystemAnalytics();
		Register_UnityEngine_SubsystemManager_ReportSingleSubsystemAnalytics();

		//System.Void UnityEngine.SubsystemManager::StaticConstructScriptingClassMap()
		void Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();
		Register_UnityEngine_SubsystemManager_StaticConstructScriptingClassMap();

	//End Registrations for type : UnityEngine.SubsystemManager

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::IsFormatSupported(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_IsFormatSupported();
		Register_UnityEngine_SystemInfo_IsFormatSupported();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetCompatibleFormat(UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.FormatUsage)
		void Register_UnityEngine_SystemInfo_GetCompatibleFormat();
		Register_UnityEngine_SystemInfo_GetCompatibleFormat();

		//UnityEngine.Experimental.Rendering.GraphicsFormat UnityEngine.SystemInfo::GetGraphicsFormat(UnityEngine.Experimental.Rendering.DefaultFormat)
		void Register_UnityEngine_SystemInfo_GetGraphicsFormat();
		Register_UnityEngine_SystemInfo_GetGraphicsFormat();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TextAsset

		//System.String UnityEngine.TextAsset::get_text()
		void Register_UnityEngine_TextAsset_get_text();
		Register_UnityEngine_TextAsset_get_text();

	//End Registrations for type : UnityEngine.TextAsset

	//Start Registrations for type : UnityEngine.Texture

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Byte[] UnityEngine.Texture2D::GetRawTextureData()
		void Register_UnityEngine_Texture2D_GetRawTextureData();
		Register_UnityEngine_Texture2D_GetRawTextureData();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
		void Register_UnityEngine_Texture2D_get_format();
		Register_UnityEngine_Texture2D_get_format();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Texture2DArray

		//System.Boolean UnityEngine.Texture2DArray::Internal_CreateImpl(UnityEngine.Texture2DArray,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture2DArray_Internal_CreateImpl();
		Register_UnityEngine_Texture2DArray_Internal_CreateImpl();

		//System.Int32 UnityEngine.Texture2DArray::get_allSlices()
		void Register_UnityEngine_Texture2DArray_get_allSlices();
		Register_UnityEngine_Texture2DArray_get_allSlices();

	//End Registrations for type : UnityEngine.Texture2DArray

	//Start Registrations for type : UnityEngine.Texture3D

		//System.Boolean UnityEngine.Texture3D::Internal_CreateImpl(UnityEngine.Texture3D,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Experimental.Rendering.GraphicsFormat,UnityEngine.Experimental.Rendering.TextureCreationFlags)
		void Register_UnityEngine_Texture3D_Internal_CreateImpl();
		Register_UnityEngine_Texture3D_Internal_CreateImpl();

	//End Registrations for type : UnityEngine.Texture3D

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::InverseTransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformDirection_Injected();
		Register_UnityEngine_Transform_InverseTransformDirection_Injected();

		//System.Void UnityEngine.Transform::InverseTransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_InverseTransformPoint_Injected();
		Register_UnityEngine_Transform_InverseTransformPoint_Injected();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::TransformDirection_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformDirection_Injected();
		Register_UnityEngine_Transform_TransformDirection_Injected();

		//System.Void UnityEngine.Transform::TransformPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_TransformPoint_Injected();
		Register_UnityEngine_Transform_TransformPoint_Injected();

		//System.Void UnityEngine.Transform::get_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localPosition_Injected();
		Register_UnityEngine_Transform_get_localPosition_Injected();

		//System.Void UnityEngine.Transform::get_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_localRotation_Injected();
		Register_UnityEngine_Transform_get_localRotation_Injected();

		//System.Void UnityEngine.Transform::get_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_localScale_Injected();
		Register_UnityEngine_Transform_get_localScale_Injected();

		//System.Void UnityEngine.Transform::get_lossyScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_lossyScale_Injected();
		Register_UnityEngine_Transform_get_lossyScale_Injected();

		//System.Void UnityEngine.Transform::get_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_get_position_Injected();
		Register_UnityEngine_Transform_get_position_Injected();

		//System.Void UnityEngine.Transform::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_get_rotation_Injected();
		Register_UnityEngine_Transform_get_rotation_Injected();

		//System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
		void Register_UnityEngine_Transform_set_hasChanged();
		Register_UnityEngine_Transform_set_hasChanged();

		//System.Void UnityEngine.Transform::set_localPosition_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localPosition_Injected();
		Register_UnityEngine_Transform_set_localPosition_Injected();

		//System.Void UnityEngine.Transform::set_localRotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_localRotation_Injected();
		Register_UnityEngine_Transform_set_localRotation_Injected();

		//System.Void UnityEngine.Transform::set_localScale_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_localScale_Injected();
		Register_UnityEngine_Transform_set_localScale_Injected();

		//System.Void UnityEngine.Transform::set_position_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_set_position_Injected();
		Register_UnityEngine_Transform_set_position_Injected();

		//System.Void UnityEngine.Transform::set_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_set_rotation_Injected();
		Register_UnityEngine_Transform_set_rotation_Injected();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::GetParent()
		void Register_UnityEngine_Transform_GetParent();
		Register_UnityEngine_Transform_GetParent();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.UnhandledExceptionHandler

		//System.Void UnityEngine.UnhandledExceptionHandler::iOSNativeUnhandledExceptionHandler(System.String,System.String,System.String)
		void Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();
		Register_UnityEngine_UnhandledExceptionHandler_iOSNativeUnhandledExceptionHandler();

	//End Registrations for type : UnityEngine.UnhandledExceptionHandler

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.XR.InputTracking

		//System.Void UnityEngine.XR.InputTracking::GetNodeStates_Internal(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
		void Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();
		Register_UnityEngine_XR_InputTracking_GetNodeStates_Internal();

	//End Registrations for type : UnityEngine.XR.InputTracking

	//Start Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

		//System.Boolean UnityEngine.XR.Tango.TangoInputTracking::Internal_TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
		void Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();
		Register_UnityEngine_XR_Tango_TangoInputTracking_Internal_TryGetPoseAtTime();

	//End Registrations for type : UnityEngine.XR.Tango.TangoInputTracking

	//Start Registrations for type : UnityEngine.XR.XRDevice

		//System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
		void Register_UnityEngine_XR_XRDevice_DisableAutoXRCameraTracking();
		Register_UnityEngine_XR_XRDevice_DisableAutoXRCameraTracking();

	//End Registrations for type : UnityEngine.XR.XRDevice

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
