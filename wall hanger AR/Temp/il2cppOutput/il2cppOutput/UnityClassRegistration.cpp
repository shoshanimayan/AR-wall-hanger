extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_XR();
	RegisterModule_XR();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_GameCenter();
	RegisterModule_GameCenter();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_AR();
	RegisterModule_AR();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

namespace ObjectProduceTestTypes { class Derived; } 
namespace ObjectProduceTestTypes { class SubDerived; } 
class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; 
class AudioBehaviour; 
class AudioListener; 
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GUIElement; template <> void RegisterUnityClass<GUIElement>(const char*);
namespace TextRenderingPrivate { class GUIText; } 
class GUITexture; 
class GUILayer; template <> void RegisterUnityClass<GUILayer>(const char*);
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; 
class CapsuleCollider; 
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
class FakeComponent; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class RendererFake; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; 
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class WorldAnchor; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; 
class AudioClip; 
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class CGProgram; 
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class MovieTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class EmptyObject; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; 
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);
class NativeObjectType; 
class PropertyModificationsTargetTestObject; 
class SerializableManagedHost; 
class SerializableManagedRefTestClass; 
namespace ObjectProduceTestTypes { class SiblingDerived; } 
class TestObjectVectorPairStringBool; 
class TestObjectWithSerializedAnimationCurve; 
class TestObjectWithSerializedArray; 
class TestObjectWithSerializedMapStringBool; 
class TestObjectWithSerializedMapStringNonAlignedStruct; 
class TestObjectWithSpecialLayoutOne; 
class TestObjectWithSpecialLayoutTwo; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 58 non stripped classes
	//0. Camera
	RegisterUnityClass<Camera>("Core");
	//1. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//2. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//3. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//4. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//5. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//6. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//7. GameManager
	RegisterUnityClass<GameManager>("Core");
	//8. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//9. Renderer
	RegisterUnityClass<Renderer>("Core");
	//10. Shader
	RegisterUnityClass<Shader>("Core");
	//11. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//12. Material
	RegisterUnityClass<Material>("Core");
	//13. Light
	RegisterUnityClass<Light>("Core");
	//14. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//15. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//16. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//17. Mesh
	RegisterUnityClass<Mesh>("Core");
	//18. Texture
	RegisterUnityClass<Texture>("Core");
	//19. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//20. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//21. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//22. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//23. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//24. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//25. GUIElement
	RegisterUnityClass<GUIElement>("Core");
	//26. GUILayer
	RegisterUnityClass<GUILayer>("Core");
	//27. GameObject
	RegisterUnityClass<GameObject>("Core");
	//28. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//29. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//30. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//31. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//32. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//33. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//34. Transform
	RegisterUnityClass<Transform>("Core");
	//35. Sprite
	RegisterUnityClass<Sprite>("Core");
	//36. Collider
	RegisterUnityClass<Collider>("Physics");
	//37. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//38. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//39. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//40. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//41. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//42. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//43. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//44. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//45. InputManager
	RegisterUnityClass<InputManager>("Core");
	//46. TagManager
	RegisterUnityClass<TagManager>("Core");
	//47. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//48. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//49. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//50. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//51. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//52. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//53. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//54. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//55. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//56. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//57. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");

}
