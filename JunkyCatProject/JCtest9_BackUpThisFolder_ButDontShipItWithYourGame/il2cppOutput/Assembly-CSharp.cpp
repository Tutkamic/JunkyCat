#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraScript
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CountDownScript
struct CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869;
// DeathScreenScript
struct DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FinishScript
struct FinishScript_tAC4625BFDA53CC0B9B75E5D1C50A6EFC046F2E4A;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManagerScript
struct GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MapManagerScript
struct MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E;
// MapScript
struct MapScript_tFEE449D307E272AE447ED61B3EBC149502115590;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseScript
struct MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerAnimationScript
struct PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393;
// PlayerCollisionScript
struct PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755;
// PlayerInputScript
struct PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59;
// PlayerMovementScript
struct PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31;
// PlayerScript
struct PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35;
// PlayerSoundManagerScript
struct PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4;
// PlayerStatsScript
struct PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneManagerScript
struct SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E;
// ScoreScript
struct ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E;
// ScorpionScript
struct ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderLifeScript
struct SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D;
// SliderScript
struct SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// CountDownScript/<CountDown>d__10
struct U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795;
// CountDownScript/StartGame
struct StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerCollisionScript/<CatIsImmune>d__9
struct U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9;
// PlayerScript/PlayerDied
struct PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F;
// PlayerStatsScript/<EnergyBoost>d__24
struct U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SceneManagerScript/PauseGame
struct PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42;
// ScorpionScript/<ScorpionRun>d__17
struct U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral0481F854A053F68BE695FD9A860E999209200901;
IL2CPP_EXTERN_C String_t* _stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7;
IL2CPP_EXTERN_C String_t* _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5;
IL2CPP_EXTERN_C String_t* _stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7CA43412E97605D9E8F9F46C604313194043B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2480FA7D878C110A8A26319FA2D5DAD233739C7D;
IL2CPP_EXTERN_C String_t* _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral4F990C96251D606DF8218B996D2AB0A7385642FB;
IL2CPP_EXTERN_C String_t* _stringLiteral527F40ADFB660F6D96BE1C0625C22A31AAD977C1;
IL2CPP_EXTERN_C String_t* _stringLiteral56408C9D77F202140AC6F89C53E7FD72B601C852;
IL2CPP_EXTERN_C String_t* _stringLiteral616B7F5DA0EF11282D86E345D9945EC00F0F2CC1;
IL2CPP_EXTERN_C String_t* _stringLiteral633C61D544C2C5E3A91845007AE974138EBCF606;
IL2CPP_EXTERN_C String_t* _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB;
IL2CPP_EXTERN_C String_t* _stringLiteral8C3F2EA347B920EDD07050DEEC273F5573A2FB8B;
IL2CPP_EXTERN_C String_t* _stringLiteralAAB3F45E7791A4545D9D62646263091C1C9B0D46;
IL2CPP_EXTERN_C String_t* _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298;
IL2CPP_EXTERN_C String_t* _stringLiteralB185A67DA2A1A041EA0C48D5B00637D6BB3315F9;
IL2CPP_EXTERN_C String_t* _stringLiteralC1163AB6F8E7FD4B2641EBA82C12C85530EF1AB4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD8D3DF385DE74B4C8F7B6F38E7007D33ECC7D9E5;
IL2CPP_EXTERN_C String_t* _stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2;
IL2CPP_EXTERN_C String_t* _stringLiteralE18D5A9507F85DCFC8D788FF97E0396926F44129;
IL2CPP_EXTERN_C String_t* _stringLiteralE353C8D9E24FEE85139CBA6A8BF1856E49036672;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDFCC61F5D4C6086E1ADAB50A4ACE0F2A8ADE9B5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393_mC3EF7771E57DC03399919FD7E4B4DE86E7D58EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755_m05DABD4C99F0C3A00A5BF3590FFBF93362700970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59_mEE3A6FC2A13591DD07112B169DB77745711DA520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31_m7E87653AF1C479230A11E122F8665CB5D38BE97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4_m57F6E9C899E0DDE73BF599CB8917B47E769C9F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF_mA252DE8A838CD58E5EBE5FC69D9F42CF482705F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D_m3DC8A86C9900F809BCB03D30DDB30B423FB91D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisCountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_m1C81F1FCD2F87062B574C1A33296733D239EC003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9_m3AA26799CB9DE1DBE3CB2DC97AA96861B2791D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_mCBE1D73E390BBAFF3BAA90D2C0D6C2DEA1EC38FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisMapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E_mA0C41D66D19CC453C0F342E4151624328442542A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E_m3C966940406FE2527B26C54FB8BD7836A3D12936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCatIsImmuneU3Ed__9_System_Collections_IEnumerator_Reset_mBBDD2BC515F656C35B12DC48A4C5EA07F4F61D22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountDownU3Ed__10_System_Collections_IEnumerator_Reset_m6DEB7F8E57C086A341EF36DD0D079804FA2226E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEnergyBoostU3Ed__24_System_Collections_IEnumerator_Reset_mADD2AF20D2B94812C09BA9DC4BFC9B187E62A529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CScorpionRunU3Ed__17_System_Collections_IEnumerator_Reset_m4978CB18F930BCCF4AF25E4C715FC89C02E75A75_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CountDownScript/<CountDown>d__10
struct U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795  : public RuntimeObject
{
	// System.Int32 CountDownScript/<CountDown>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CountDownScript/<CountDown>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CountDownScript CountDownScript/<CountDown>d__10::<>4__this
	CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* ___U3CU3E4__this_2;
};

// PlayerCollisionScript/<CatIsImmune>d__9
struct U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9  : public RuntimeObject
{
	// System.Int32 PlayerCollisionScript/<CatIsImmune>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerCollisionScript/<CatIsImmune>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerCollisionScript PlayerCollisionScript/<CatIsImmune>d__9::<>4__this
	PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* ___U3CU3E4__this_2;
	// System.Single PlayerCollisionScript/<CatIsImmune>d__9::<immuneTimeStart>5__2
	float ___U3CimmuneTimeStartU3E5__2_3;
};

// PlayerStatsScript/<EnergyBoost>d__24
struct U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0  : public RuntimeObject
{
	// System.Int32 PlayerStatsScript/<EnergyBoost>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerStatsScript/<EnergyBoost>d__24::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerStatsScript PlayerStatsScript/<EnergyBoost>d__24::<>4__this
	PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* ___U3CU3E4__this_2;
	// System.Single PlayerStatsScript/<EnergyBoost>d__24::<time>5__2
	float ___U3CtimeU3E5__2_3;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// ScorpionScript/<ScorpionRun>d__17
struct U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A  : public RuntimeObject
{
	// System.Int32 ScorpionScript/<ScorpionRun>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScorpionScript/<ScorpionRun>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ScorpionScript ScorpionScript/<ScorpionRun>d__17::<>4__this
	ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* ___U3CU3E4__this_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// CountDownScript/StartGame
struct StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2  : public MulticastDelegate_t
{
};

// PlayerScript/PlayerDied
struct PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F  : public MulticastDelegate_t
{
};

// SceneManagerScript/PauseGame
struct PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraScript
struct CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerScript CameraScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_4;
	// System.Single CameraScript::camConstantSpeed
	float ___camConstantSpeed_5;
};

// CountDownScript
struct CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI CountDownScript::CountText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___CountText_4;
	// System.Int32 CountDownScript::count
	int32_t ___count_5;
	// System.Boolean CountDownScript::countdownActive
	bool ___countdownActive_7;
};

struct CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields
{
	// CountDownScript/StartGame CountDownScript::StartGo
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* ___StartGo_6;
};

// DeathScreenScript
struct DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerScript DeathScreenScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_4;
	// UnityEngine.GameObject DeathScreenScript::deathScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathScreen_5;
	// UnityEngine.GameObject DeathScreenScript::newHighscoreText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___newHighscoreText_6;
	// TMPro.TextMeshProUGUI DeathScreenScript::finalScoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___finalScoreText_7;
	// TMPro.TextMeshProUGUI DeathScreenScript::gameOverText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___gameOverText_8;
	// TMPro.TextMeshProUGUI DeathScreenScript::kuwetaText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___kuwetaText_9;
};

// FinishScript
struct FinishScript_tAC4625BFDA53CC0B9B75E5D1C50A6EFC046F2E4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DeathScreenScript FinishScript::deathScreenScript
	DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* ___deathScreenScript_4;
	// PlayerScript FinishScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_5;
};

// GameManagerScript
struct GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String GameManagerScript::playerName
	String_t* ___playerName_5;
	// System.String GameManagerScript::highscorePlayerName
	String_t* ___highscorePlayerName_6;
	// UnityEngine.Texture GameManagerScript::playerMaterialTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___playerMaterialTexture_7;
	// System.Int32 GameManagerScript::finalScore
	int32_t ___finalScore_8;
	// System.Int32 GameManagerScript::highscore
	int32_t ___highscore_9;
};

struct GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields
{
	// GameManagerScript GameManagerScript::<instance>k__BackingField
	GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___U3CinstanceU3Ek__BackingField_4;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// MapManagerScript
struct MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManagerScript::beginMaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___beginMaps_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManagerScript::easyMaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___easyMaps_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManagerScript::middleMaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___middleMaps_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManagerScript::hardMaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hardMaps_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MapManagerScript::impossibleMaps
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___impossibleMaps_8;
	// UnityEngine.GameObject MapManagerScript::finishMap
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___finishMap_9;
	// System.Int32 MapManagerScript::level
	int32_t ___level_10;
	// System.Single MapManagerScript::levelSpeedFactor
	float ___levelSpeedFactor_11;
	// UnityEngine.Vector3 MapManagerScript::spawnMapPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnMapPosition_12;
};

// MapScript
struct MapScript_tFEE449D307E272AE447ED61B3EBC149502115590  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CameraScript MapScript::cameraScript
	CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* ___cameraScript_4;
	// MapManagerScript MapScript::mapManagerScript
	MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* ___mapManagerScript_5;
};

// MouseScript
struct MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject MouseScript::cat
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cat_4;
	// UnityEngine.Rigidbody MouseScript::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// System.Single MouseScript::distance
	float ___distance_6;
	// System.Boolean MouseScript::isGrounded
	bool ___isGrounded_7;
	// System.Single MouseScript::distanceToGround
	float ___distanceToGround_8;
};

// PlayerAnimationScript
struct PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerAnimationScript::animationRunSpeed
	float ___animationRunSpeed_4;
	// PlayerScript PlayerAnimationScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_5;
};

// PlayerCollisionScript
struct PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlayerCollisionScript::isImmune
	bool ___isImmune_4;
	// System.Single PlayerCollisionScript::immuneTime
	float ___immuneTime_5;
	// UnityEngine.Shader PlayerCollisionScript::immuneMaterialShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___immuneMaterialShader_6;
	// UnityEngine.Shader PlayerCollisionScript::normalMaterialShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___normalMaterialShader_7;
	// UnityEngine.Material PlayerCollisionScript::catMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___catMaterial_8;
	// PlayerScript PlayerCollisionScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_9;
};

// PlayerInputScript
struct PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Joystick PlayerInputScript::joystick
	Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* ___joystick_4;
	// PlayerScript PlayerInputScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_5;
	// UnityEngine.Rigidbody PlayerInputScript::playerRigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidBody_6;
	// System.Single PlayerInputScript::angle
	float ___angle_7;
	// System.Single PlayerInputScript::catMoveSpeed
	float ___catMoveSpeed_8;
	// System.Single PlayerInputScript::catAndCamMoveSpeed
	float ___catAndCamMoveSpeed_9;
	// System.Single PlayerInputScript::catConstantSpeed
	float ___catConstantSpeed_10;
	// UnityEngine.Vector3 PlayerInputScript::catVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___catVelocity_11;
};

// PlayerMovementScript
struct PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerMovementScript::playerRigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidBody_4;
	// PlayerScript PlayerMovementScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_5;
	// System.Single PlayerMovementScript::forwardSpeedFactor
	float ___forwardSpeedFactor_6;
	// System.Boolean PlayerMovementScript::catOutOfMap
	bool ___catOutOfMap_7;
	// System.Single PlayerMovementScript::distanceToGround
	float ___distanceToGround_8;
	// System.Boolean PlayerMovementScript::isGrounded
	bool ___isGrounded_9;
	// System.Single PlayerMovementScript::levelFactor
	float ___levelFactor_10;
};

// PlayerScript
struct PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SliderScript PlayerScript::sliderScript
	SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* ___sliderScript_5;
	// SliderLifeScript PlayerScript::sliderLifeScript
	SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* ___sliderLifeScript_6;
	// CameraScript PlayerScript::cameraScript
	CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* ___cameraScript_7;
	// PlayerInputScript PlayerScript::playerInputScript
	PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* ___playerInputScript_8;
	// PlayerMovementScript PlayerScript::playerMovementScript
	PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* ___playerMovementScript_9;
	// PlayerCollisionScript PlayerScript::playerCollisionScript
	PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* ___playerCollisionScript_10;
	// PlayerStatsScript PlayerScript::playerStatsScript
	PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* ___playerStatsScript_11;
	// PlayerAnimationScript PlayerScript::playerAnimationScript
	PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* ___playerAnimationScript_12;
	// PlayerSoundManagerScript PlayerScript::playerSoundManagerScript
	PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* ___playerSoundManagerScript_13;
	// CountDownScript PlayerScript::countDownScript
	CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* ___countDownScript_14;
	// ScoreScript PlayerScript::scoreScript
	ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* ___scoreScript_15;
	// MapManagerScript PlayerScript::mapManagerScript
	MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* ___mapManagerScript_16;
	// UnityEngine.Rigidbody PlayerScript::playerRigidBody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___playerRigidBody_17;
	// UnityEngine.Material PlayerScript::catMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___catMaterial_18;
	// UnityEngine.Texture PlayerScript::defaultTexture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___defaultTexture_19;
	// UnityEngine.GameObject PlayerScript::deathScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathScreen_20;
	// System.Boolean PlayerScript::catHasDied
	bool ___catHasDied_21;
	// System.Boolean PlayerScript::catFinish
	bool ___catFinish_22;
};

struct PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields
{
	// PlayerScript/PlayerDied PlayerScript::CatDied
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* ___CatDied_4;
};

// PlayerSoundManagerScript
struct PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource PlayerSoundManagerScript::addSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___addSound_4;
	// UnityEngine.AudioSource PlayerSoundManagerScript::hitSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hitSound_5;
	// UnityEngine.AudioSource PlayerSoundManagerScript::boostSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___boostSound_6;
	// UnityEngine.AudioSource PlayerSoundManagerScript::lifeSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___lifeSound_7;
};

// PlayerStatsScript
struct PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerScript PlayerStatsScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_4;
	// System.Int32 PlayerStatsScript::maxEnergy
	int32_t ___maxEnergy_5;
	// System.Int32 PlayerStatsScript::maxLife
	int32_t ___maxLife_6;
	// System.Int32 PlayerStatsScript::energy
	int32_t ___energy_7;
	// System.Int32 PlayerStatsScript::life
	int32_t ___life_8;
	// System.Int32 PlayerStatsScript::kocimietkaAdd
	int32_t ___kocimietkaAdd_9;
	// System.Boolean PlayerStatsScript::catOutOfLife
	bool ___catOutOfLife_10;
	// System.Boolean PlayerStatsScript::pauseStats
	bool ___pauseStats_11;
	// System.Boolean PlayerStatsScript::isBoost
	bool ___isBoost_12;
	// System.Single PlayerStatsScript::boostTime
	float ___boostTime_13;
	// UnityEngine.GameObject PlayerStatsScript::boostSphere
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___boostSphere_14;
};

// SceneManagerScript
struct SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerScript SceneManagerScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_4;
	// UnityEngine.AudioSource SceneManagerScript::clickSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___clickSound_5;
	// UnityEngine.UI.Image[] SceneManagerScript::colorButtonImage
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___colorButtonImage_6;
	// UnityEngine.Sprite[] SceneManagerScript::colorButtonSpriteActive
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___colorButtonSpriteActive_7;
	// UnityEngine.Sprite[] SceneManagerScript::colorButtonSpriteUnactive
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___colorButtonSpriteUnactive_8;
	// TMPro.TextMeshProUGUI SceneManagerScript::playerNameText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerNameText_9;
	// UnityEngine.Texture[] SceneManagerScript::playerBodyMaterialTexture
	TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* ___playerBodyMaterialTexture_10;
	// UnityEngine.Material SceneManagerScript::CatBodyMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___CatBodyMaterial_11;
	// UnityEngine.Shader SceneManagerScript::CatBodyShader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___CatBodyShader_12;
	// UnityEngine.GameObject SceneManagerScript::manualScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___manualScreen_13;
	// UnityEngine.GameObject SceneManagerScript::highScoreScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___highScoreScreen_14;
	// TMPro.TextMeshProUGUI SceneManagerScript::highscoreName
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___highscoreName_15;
	// TMPro.TextMeshProUGUI SceneManagerScript::highscoreScore
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___highscoreScore_16;
	// UnityEngine.GameObject SceneManagerScript::pauseScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseScreen_19;
	// System.Boolean SceneManagerScript::gamePaused
	bool ___gamePaused_20;
};

struct SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields
{
	// SceneManagerScript/PauseGame SceneManagerScript::Pause
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___Pause_17;
	// SceneManagerScript/PauseGame SceneManagerScript::Resume
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___Resume_18;
};

// ScoreScript
struct ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ScoreScript::score
	int32_t ___score_4;
	// System.Int32 ScoreScript::walkScore
	int32_t ___walkScore_5;
	// System.Int32 ScoreScript::energyScore
	int32_t ___energyScore_6;
	// UnityEngine.GameObject ScoreScript::cat
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cat_7;
	// PlayerScript ScoreScript::playerScript
	PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* ___playerScript_8;
	// DeathScreenScript ScoreScript::deathScreenScript
	DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* ___deathScreenScript_9;
};

// ScorpionScript
struct ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ScorpionScript::cat
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cat_4;
	// UnityEngine.Rigidbody ScorpionScript::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_5;
	// System.Single ScorpionScript::distance
	float ___distance_6;
	// System.Boolean ScorpionScript::isInRange
	bool ___isInRange_7;
	// System.Boolean ScorpionScript::isBite
	bool ___isBite_8;
	// System.Boolean ScorpionScript::isCatKilled
	bool ___isCatKilled_9;
	// System.Single ScorpionScript::biteTime
	float ___biteTime_10;
	// System.Single ScorpionScript::immuneTime
	float ___immuneTime_11;
	// System.Boolean ScorpionScript::isGrounded
	bool ___isGrounded_12;
	// System.Single ScorpionScript::distanceToGround
	float ___distanceToGround_13;
};

// SliderLifeScript
struct SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SliderLifeScript::LifeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___LifeSlider_4;
};

// SliderScript
struct SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider SliderScript::EnergySlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___EnergySlider_4;
	// UnityEngine.UI.Image SliderScript::fill
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fill_5;
	// UnityEngine.Gradient SliderScript::gradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___gradient_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46  : public RuntimeArray
{
	ALIGN_FIELD (8) Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* m_Items[1];

	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPoint1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CountDownScript::CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CountDownScript_CountDown_mAB9335C560F80CC92573BABE2D6C23E72188067C (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void CountDownScript/<CountDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__10__ctor_mBDF86E31AF479FDEEDC7C8777E39F920DDAFEEE3 (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void CountDownScript/StartGame::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_inline (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void PlayerScript/PlayerDied::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283 (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PlayerScript::add_CatDied(PlayerScript/PlayerDied)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8 (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* ___value0, const RuntimeMethod* method) ;
// System.Void PlayerScript::remove_CatDied(PlayerScript/PlayerDied)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PlayerScript>()
inline PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A (const RuntimeMethod* method)
{
	return ((  PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// GameManagerScript GameManagerScript::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<DeathScreenScript>()
inline DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* Object_FindObjectOfType_TisDeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9_m3AA26799CB9DE1DBE3CB2DC97AA96861B2791D99 (const RuntimeMethod* method)
{
	return ((  DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void GameManagerScript::set_instance(GameManagerScript)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManagerScript_set_instance_mD6EA9C94D37606DAF078D5C57D33714AFE55F6B3_inline (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void MapManagerScript::MapCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_MapCreate_m2C6AF022693ED78ED59B874B133093F0F364540D (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) ;
// System.Void MapManagerScript::InstantiateMap(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69 (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___map0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<CameraScript>()
inline CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* Object_FindObjectOfType_TisCameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D_m3DC8A86C9900F809BCB03D30DDB30B423FB91D81 (const RuntimeMethod* method)
{
	return ((  CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<MapManagerScript>()
inline MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* Object_FindObjectOfType_TisMapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E_mA0C41D66D19CC453C0F342E4151624328442542A (const RuntimeMethod* method)
{
	return ((  MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void MouseScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_GorundedCheck_mA482A6E0684F66CFFBF5C92632020DBB01BA9F41 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) ;
// System.Void MouseScript::MouseRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_MouseRunning_m4D3E3D60719E0938BF31A067D8A67FBE67130246 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerScript>()
inline PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PlayerAnimationScript::StartAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_StartAnimation_m7EF884AF4F58B8347B94466B7A4CBB3AE31BF213 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void PlayerAnimationScript::AnimationRunSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_AnimationRunSpeed_mD9BA6BA4015F47550B4567A124E7AB5DCB94DBB6 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Single PlayerMovementScript::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerMovementScript_Remap_mAA757E959CE17955697E21BCCAF66CC86196A9C7 (float ___x0, float ___a1, float ___b2, float ___c3, float ___d4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::GetHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_GetHit_m5789F1A7C8C12C92D83C2F78934BD498EEE7215A (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void PlayerSoundManagerScript::PlaySound(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43 (PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sound0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerCollisionScript::CatIsImmune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollisionScript_CatIsImmune_mC208D949FE09B268EE703ECBC696315B71D18D04 (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::MouseAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_MouseAdd_m633CAC0290EF65AA0273F8771893DD43525D9F16 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::EnergyAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_EnergyAdd_m44A391E5CBC9204053D250DBC8BDB80FED829CFF (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void PlayerCollisionScript/<CatIsImmune>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCatIsImmuneU3Ed__9__ctor_mF3A3C5A43EDC602E989EED53ABA50F23BEC44C8A (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void SceneManagerScript/PauseGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::add_Pause(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_add_Pause_m389993B414D86F7A75BACD527CAD35136091224B (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::add_Resume(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_add_Resume_m066069A674195FE1619145F87CCFBF193416F80E (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) ;
// System.Void CountDownScript/StartGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void CountDownScript::add_StartGo(CountDownScript/StartGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_add_StartGo_m57912379F8E324F7F364EBBA11E63F2961EA8FF3 (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* ___value0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::remove_Pause(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_remove_Pause_m15AAA65C668421E6E28ABD3A925B2E22D3D2DBEA (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::remove_Resume(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_remove_Resume_m1E1A22F9FA45E2047D732EB0B96E893A262A9BC1 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) ;
// System.Void CountDownScript::remove_StartGo(CountDownScript/StartGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_remove_StartGo_m533C45162BE4E5362A4AD364BA8FF79043579EFF (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Joystick>()
inline Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* Object_FindObjectOfType_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_mCBE1D73E390BBAFF3BAA90D2C0D6C2DEA1EC38FA (const RuntimeMethod* method)
{
	return ((  Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void PlayerInputScript::StopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) ;
// System.Void PlayerInputScript::PlayerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_PlayerInput_m23F8D44C34267502D7ED45DF1939D351E5D30198 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::PlayerFallCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerFallCheck_mC4EDAF463E4ADF11719D522364B9AAE72E2E1360 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::PlayerRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerRotate_m5591793B076B7D62328CAA57D9149EDAEE3BD88E (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, float ___x0, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::PlayerMovableArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerMovableArea_mA6E09565739AF5DC8CE17697576CE2ABF58F3367 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::ForwardSpeedFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_ForwardSpeedFactor_m0486D844FDD5A2DC4C89FC0411EC8DDFBFAB5B39 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_GorundedCheck_m26945CEC877B1690F920BF2EB37384D6B25DB813 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::PlayerConstantMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerConstantMove_mF1023FDA56950AC8DA549318FA5420C1A8640A63 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void PlayerMovementScript::PLayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PLayerMove_mDEC8D918F740BFA3530F7E3A7FF53BF6DA078296 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerInputScript>()
inline PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* Component_GetComponent_TisPlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59_mEE3A6FC2A13591DD07112B169DB77745711DA520 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerMovementScript>()
inline PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* Component_GetComponent_TisPlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31_m7E87653AF1C479230A11E122F8665CB5D38BE97D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerCollisionScript>()
inline PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* Component_GetComponent_TisPlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755_m05DABD4C99F0C3A00A5BF3590FFBF93362700970 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerStatsScript>()
inline PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* Component_GetComponent_TisPlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF_mA252DE8A838CD58E5EBE5FC69D9F42CF482705F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerAnimationScript>()
inline PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* Component_GetComponent_TisPlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393_mC3EF7771E57DC03399919FD7E4B4DE86E7D58EA7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<PlayerSoundManagerScript>()
inline PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* Component_GetComponent_TisPlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4_m57F6E9C899E0DDE73BF599CB8917B47E769C9F6F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Object::FindObjectOfType<CountDownScript>()
inline CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* Object_FindObjectOfType_TisCountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_m1C81F1FCD2F87062B574C1A33296733D239EC003 (const RuntimeMethod* method)
{
	return ((  CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// T UnityEngine.Object::FindObjectOfType<ScoreScript>()
inline ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* Object_FindObjectOfType_TisScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E_m3C966940406FE2527B26C54FB8BD7836A3D12936 (const RuntimeMethod* method)
{
	return ((  ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void PlayerScript::TextureSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_TextureSet_m4AAA7C7E2CFD1C29C7C6964EC359770ECF497650 (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___value1, const RuntimeMethod* method) ;
// System.Void PlayerScript::CatDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_CatDead_mA40421D639F99E762BAD540243AC62CEC3E9E94B (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) ;
// System.Void PlayerScript/PlayerDied::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_inline (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::StopStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::SetMaxSliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_SetMaxSliderValue_m6344ECD05EFEE9289E3DEF1500ABACCF8B327DAC (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_SetStartValue_m7CBFE19E47A94B5B03819787C84C1391C4C42242 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void SliderScript::SetMaxSliderValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScript_SetMaxSliderValue_mDFBF47C5C39CC55291205699AD90A0DE63241523 (SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___maxValue1, const RuntimeMethod* method) ;
// System.Void SliderLifeScript::SetMaxSliderLifeValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLifeScript_SetMaxSliderLifeValue_m69D70E8661BC8333B931345D1465D807E90E4CE1 (SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___maxValue1, const RuntimeMethod* method) ;
// System.Void SliderLifeScript::SetSliderLifeValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F (SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void SliderScript::SetSliderValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScript_SetSliderValue_mB842C13F578B83CD87085098D5B1297A3A2A5F41 (SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerStatsScript::EnergyBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerStatsScript_EnergyBoost_m8CC14DF6C05D280795739940D20CFD618E5A71A7 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void PlayerStatsScript/<EnergyBoost>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnergyBoostU3Ed__24__ctor_m82FC5867985D7D11EAF4FEAE882134D6789DBA86 (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::PlayerChanges(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, int32_t ___numer0, String_t* ___nazwa1, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::ExitPauseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ExitPauseButton_mBAD420B198ADE760CE9F5D2B08A16B2C3E598B55 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::PLaySoundEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void SceneManagerScript::ResumeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ResumeStart_mEEC0BA6FF6A710F22AE0BBD1FB7D8BA82F92CCE4 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::ButtonStateChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ButtonStateChange_m76E5DECD8995BA73DE984A93E90423B05E832817 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, int32_t ___number0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::PlayerNameText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerNameText_mB1FB63D0461029BF668CA2B297A85603E2E27A60 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::PlayerMaterialTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerMaterialTexture_m7102AB315D6931FD9353F4C07527753B7F62528D (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A (int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void SceneManagerScript::PauseStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PauseStart_m558BF7D537F5CB85A7A6390B590AB47701463C7C (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) ;
// System.Void SceneManagerScript/PauseGame::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_inline (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ScorpionScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_GorundedCheck_m4CEA0947872C61D4719F1058D9B34A8C7EFA8CC7 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) ;
// System.Void ScorpionScript::CatDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_CatDistance_m58BF5C3E6476FDF0D4C0735D343447FEB0D57AFC (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ScorpionScript::ScorpionRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorpionScript_ScorpionRun_m2324CF65C793092454D439E00D0F25909839C351 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) ;
// System.Void ScorpionScript/<ScorpionRun>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScorpionRunU3Ed__17__ctor_m7914F6E2F4CF69762915AF3A6EA20316FEB21922 (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_get_normalizedValue_mC839197322275EF1318B6E49B7573FDB30F74D83 (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_1, 0, NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_2 = __this->___variableJoystick_4;
		NullCheck(L_2);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_2, 1, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_1, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___axisSprites_7;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_6, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_7 = __this->___variableJoystick_4;
		NullCheck(L_7);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_7, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___axisSprites_7;
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_12, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_13 = __this->___variableJoystick_4;
		NullCheck(L_13);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_13, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___axisSprites_7;
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___eventData0;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_m5629068CE7C8D2E654F8F529E89DC5802F3452BB(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___screenPosition0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9E502D410F5B141117D263D4706C426EFA109DC0(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___input_14 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___joystickType0, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___eventData0;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___eventData0;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___magnitude0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalised1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___radius2, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___radius2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___normalised1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___radius2;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___cam3;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_Start_mA5B7202B365DD49486C67738FBD1EC84D104BE33 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CameraScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript_FixedUpdate_m2A46914D11B6048DB3995E7C8C44BC80C76C1330 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += new Vector3(0f, 0f, playerScript.playerInputScript.catAndCamMoveSpeed * camConstantSpeed * playerScript.playerMovementScript.forwardSpeedFactor * playerScript.playerMovementScript.levelFactor) * Time.fixedDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_4;
		NullCheck(L_3);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_4 = L_3->___playerInputScript_8;
		NullCheck(L_4);
		float L_5 = L_4->___catAndCamMoveSpeed_9;
		float L_6 = __this->___camConstantSpeed_5;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_7 = __this->___playerScript_4;
		NullCheck(L_7);
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_8 = L_7->___playerMovementScript_9;
		NullCheck(L_8);
		float L_9 = L_8->___forwardSpeedFactor_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_10 = __this->___playerScript_4;
		NullCheck(L_10);
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_11 = L_10->___playerMovementScript_9;
		NullCheck(L_11);
		float L_12 = L_11->___levelFactor_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, L_6)), L_9)), L_12)), /*hidden argument*/NULL);
		float L_14;
		L_14 = Time_get_fixedDeltaTime_mD7107AF06157FC18A50E14E0755CEE137E9A4088(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_15, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_16, NULL);
		// }
		return;
	}
}
// System.Void CameraScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraScript__ctor_mDCE666CE7EF072645A59FD192F310106688922B2 (CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CountDownScript::add_StartGo(CountDownScript/StartGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_add_StartGo_m57912379F8E324F7F364EBBA11E63F2961EA8FF3 (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_0 = NULL;
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_1 = NULL;
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_2 = NULL;
	{
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_0 = ((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6;
		V_0 = L_0;
	}

IL_0006:
	{
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_1 = V_0;
		V_1 = L_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_2 = V_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)CastclassSealed((RuntimeObject*)L_4, StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var));
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_5 = V_2;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_6 = V_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_7;
		L_7 = InterlockedCompareExchangeImpl<StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*>((&((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6), L_5, L_6);
		V_0 = L_7;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_8 = V_0;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_9 = V_1;
		if ((!(((RuntimeObject*)(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)L_8) == ((RuntimeObject*)(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CountDownScript::remove_StartGo(CountDownScript/StartGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_remove_StartGo_m533C45162BE4E5362A4AD364BA8FF79043579EFF (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_0 = NULL;
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_1 = NULL;
	StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* V_2 = NULL;
	{
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_0 = ((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6;
		V_0 = L_0;
	}

IL_0006:
	{
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_1 = V_0;
		V_1 = L_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_2 = V_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)CastclassSealed((RuntimeObject*)L_4, StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var));
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_5 = V_2;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_6 = V_1;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_7;
		L_7 = InterlockedCompareExchangeImpl<StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*>((&((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6), L_5, L_6);
		V_0 = L_7;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_8 = V_0;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_9 = V_1;
		if ((!(((RuntimeObject*)(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)L_8) == ((RuntimeObject*)(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void CountDownScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_Awake_mA5850BEA30F1F84CE4E606BA0C81509FA56BD879 (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) 
{
	{
		// count = 3;
		__this->___count_5 = 3;
		// }
		return;
	}
}
// System.Void CountDownScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_Start_mC5584963CC77A29FF66CD6D158AAA53E423B78CC (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) 
{
	{
		// countdownActive = true;
		__this->___countdownActive_7 = (bool)1;
		// StartCoroutine(CountDown());
		RuntimeObject* L_0;
		L_0 = CountDownScript_CountDown_mAB9335C560F80CC92573BABE2D6C23E72188067C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void CountDownScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript_Update_mCB9D2154F41F684CD5A11E025F0278441E1110DA (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CountDownScript::CountDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CountDownScript_CountDown_mAB9335C560F80CC92573BABE2D6C23E72188067C (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* L_0 = (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795*)il2cpp_codegen_object_new(U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCountDownU3Ed__10__ctor_mBDF86E31AF479FDEEDC7C8777E39F920DDAFEEE3(L_0, 0, NULL);
		U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CountDownScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownScript__ctor_m57D1E3CCD45E137B99DB39B5D23CF577E1650691 (CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_Multicast(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* currentDelegate = reinterpret_cast<StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_Open(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_OpenStaticInvoker(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_ClosedStaticInvoker(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2 (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void CountDownScript/StartGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_Multicast;
}
// System.Void CountDownScript/StartGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CountDownScript/StartGame::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartGame_BeginInvoke_m499DEDE30957AB06B915596AF9920E50A3C5C952 (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void CountDownScript/StartGame::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartGame_EndInvoke_mE04D424F1EC5073942B2FF162EE31C85BFCF0535 (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CountDownScript/<CountDown>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__10__ctor_mBDF86E31AF479FDEEDC7C8777E39F920DDAFEEE3 (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CountDownScript/<CountDown>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__10_System_IDisposable_Dispose_mE73E7C0EA434D6800AABE6E0A05F7F0B90807DCD (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CountDownScript/<CountDown>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountDownU3Ed__10_MoveNext_mFEA271792C5DFFE2B9A8E4CC3B7276625195A949 (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_00a1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_006f;
	}

IL_002b:
	{
		// CountText.text = count.ToString();
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_3 = V_1;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___CountText_4;
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_5 = V_1;
		NullCheck(L_5);
		int32_t* L_6 = (&L_5->___count_5);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_7);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// count--;
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_9 = V_1;
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___count_5;
		NullCheck(L_9);
		L_9->___count_5 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_006f:
	{
		// while (count > 0)
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->___count_5;
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		// CountText.text = "GO!";
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_14 = V_1;
		NullCheck(L_14);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15 = L_14->___CountText_4;
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_15, _stringLiteral37E4D9717D4F65640D4D604FDCADCA3A42C8047B);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_16 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_16, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_16);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// countdownActive = false;
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_19 = V_1;
		NullCheck(L_19);
		L_19->___countdownActive_7 = (bool)0;
		// if (StartGo != null)
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_20 = ((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6;
		if (!L_20)
		{
			goto IL_00cc;
		}
	}
	{
		// StartGo();
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_21 = ((CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_StaticFields*)il2cpp_codegen_static_fields_for(CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_il2cpp_TypeInfo_var))->___StartGo_6;
		NullCheck(L_21);
		StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_inline(L_21, NULL);
	}

IL_00cc:
	{
		// }
		return (bool)0;
	}
}
// System.Object CountDownScript/<CountDown>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountDownU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m954D8C859E9C7A560F0A413FB18EAFCD69D7E4D4 (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CountDownScript/<CountDown>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountDownU3Ed__10_System_Collections_IEnumerator_Reset_m6DEB7F8E57C086A341EF36DD0D079804FA2226E6 (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCountDownU3Ed__10_System_Collections_IEnumerator_Reset_m6DEB7F8E57C086A341EF36DD0D079804FA2226E6_RuntimeMethod_var)));
	}
}
// System.Object CountDownScript/<CountDown>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCountDownU3Ed__10_System_Collections_IEnumerator_get_Current_m9012FEB71B357C12693C7FBDB97B67D6F8B49A2E (U3CCountDownU3Ed__10_t78367440DFBE7907D06C03D795D2D17E707D5795* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DeathScreenScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_OnEnable_mBC477412D2356CA3DD22F1F42E4711BA10320CE9 (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += DeathScreen;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// }
		return;
	}
}
// System.Void DeathScreenScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_OnDisable_m9B69A30AA539F8461862E333E97FCD5B8CB49BFA (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= DeathScreen;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// }
		return;
	}
}
// System.Void DeathScreenScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_Awake_mA75DBDC5A0106235A01D811187653A05047BC87A (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathScreen.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathScreen_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// playerScript = FindObjectOfType<PlayerScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_2;
		L_2 = Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A(Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		__this->___playerScript_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_4), (void*)L_2);
		// }
		return;
	}
}
// System.Void DeathScreenScript::MainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_MainMenuButton_mF4141A7BEC3A5F1CBD0830A8A93E3B0A66A2F06F (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// deathScreen.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathScreen_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DeathScreenScript::PlayAgainButton1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_PlayAgainButton1_mDDB1F4CC6A9248A3460F9827C4E76A6AD6D0B704 (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// deathScreen.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathScreen_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DeathScreenScript::DeathScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript_DeathScreen_mBAF9A5C594A7494A23BD083EA21453CE1CED9F7A (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F990C96251D606DF8218B996D2AB0A7385642FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// deathScreen.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___deathScreen_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// finalScoreText.text = GameManagerScript.instance.finalScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___finalScoreText_7;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_3;
		L_3 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___finalScore_8);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// gameOverText.text = "GAME OVER";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___gameOverText_8;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteral19E30120BF148B4BD74A0C6CE7F85A461E68A628);
		// kuwetaText.text = "Nie ogarniam tej kuwety";
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___kuwetaText_9;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_7, _stringLiteral4F990C96251D606DF8218B996D2AB0A7385642FB);
		// if (GameManagerScript.instance.finalScore > GameManagerScript.instance.highscore)
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_8;
		L_8 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_8);
		int32_t L_9 = L_8->___finalScore_8;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_10;
		L_10 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_10);
		int32_t L_11 = L_10->___highscore_9;
		if ((((int32_t)L_9) <= ((int32_t)L_11)))
		{
			goto IL_009b;
		}
	}
	{
		// GameManagerScript.instance.highscore = GameManagerScript.instance.finalScore;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_12;
		L_12 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_13;
		L_13 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_13);
		int32_t L_14 = L_13->___finalScore_8;
		NullCheck(L_12);
		L_12->___highscore_9 = L_14;
		// GameManagerScript.instance.highscorePlayerName = GameManagerScript.instance.playerName;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_15;
		L_15 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_16;
		L_16 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_16);
		String_t* L_17 = L_16->___playerName_5;
		NullCheck(L_15);
		L_15->___highscorePlayerName_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___highscorePlayerName_6), (void*)L_17);
		// newHighscoreText.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___newHighscoreText_6;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_18, NULL);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		return;
	}

IL_009b:
	{
		// newHighscoreText.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___newHighscoreText_6;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_20, NULL);
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DeathScreenScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeathScreenScript__ctor_m13357ACACD3647E9D8D920EFAAA27EF433C15ADA (DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FinishScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_Start_m37EA792EDA2A6165EE7C6DE0A707CDE91308E881 (FinishScript_tAC4625BFDA53CC0B9B75E5D1C50A6EFC046F2E4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9_m3AA26799CB9DE1DBE3CB2DC97AA96861B2791D99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = FindObjectOfType<PlayerScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A(Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		__this->___playerScript_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_5), (void*)L_0);
		// deathScreenScript = FindObjectOfType<DeathScreenScript>();
		DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* L_1;
		L_1 = Object_FindObjectOfType_TisDeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9_m3AA26799CB9DE1DBE3CB2DC97AA96861B2791D99(Object_FindObjectOfType_TisDeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9_m3AA26799CB9DE1DBE3CB2DC97AA96861B2791D99_RuntimeMethod_var);
		__this->___deathScreenScript_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deathScreenScript_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void FinishScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript_OnTriggerEnter_mC8679C4D74C70633A980BFCED555E9EC2A610165 (FinishScript_tAC4625BFDA53CC0B9B75E5D1C50A6EFC046F2E4A* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7CA43412E97605D9E8F9F46C604313194043B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB185A67DA2A1A041EA0C48D5B00637D6BB3315F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0048;
		}
	}
	{
		// deathScreenScript.gameOverText.text = "WINNER";
		DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* L_3 = __this->___deathScreenScript_4;
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = L_3->___gameOverText_8;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, _stringLiteral1C7CA43412E97605D9E8F9F46C604313194043B6);
		// deathScreenScript.kuwetaText.text = "Ogarniam te kuwete";
		DeathScreenScript_tD12AEE1F999D71D70ADA3DF2214985AC2A46E3A9* L_5 = __this->___deathScreenScript_4;
		NullCheck(L_5);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = L_5->___kuwetaText_9;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, _stringLiteralB185A67DA2A1A041EA0C48D5B00637D6BB3315F9);
		// playerScript.catFinish = true;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_7 = __this->___playerScript_5;
		NullCheck(L_7);
		L_7->___catFinish_22 = (bool)1;
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void FinishScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FinishScript__ctor_m01FC49E279F8BF7BD88FCF9C3FE08607A97AA478 (FinishScript_tAC4625BFDA53CC0B9B75E5D1C50A6EFC046F2E4A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameManagerScript GameManagerScript::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManagerScript instance { get; private set; }
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0 = ((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameManagerScript::set_instance(GameManagerScript)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_set_instance_mD6EA9C94D37606DAF078D5C57D33714AFE55F6B3 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManagerScript instance { get; private set; }
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0 = ___value0;
		((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void GameManagerScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_OnEnable_m2A1636ECADE8CF89F49D6913790BACA199BE7A90 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += SaveHighscore;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_OnDisable_mC0AD4ED00DD9FFF214F6B1B55C5A118AE618AA09 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= SaveHighscore;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Awake_m8145BB58675A18641F48D34111A9273D317FE160 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0;
		L_0 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		GameManagerScript_set_instance_mD6EA9C94D37606DAF078D5C57D33714AFE55F6B3_inline(__this, NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManagerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_Start_mA25E3020DECECA3D3FE1405D943E9CBE204111A3 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE353C8D9E24FEE85139CBA6A8BF1856E49036672);
		s_Il2CppMethodInitialized = true;
	}
	{
		// highscore = PlayerPrefs.GetInt("highscore");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, NULL);
		__this->___highscore_9 = L_0;
		// highscorePlayerName = PlayerPrefs.GetString("highscoreName");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralE353C8D9E24FEE85139CBA6A8BF1856E49036672, NULL);
		__this->___highscorePlayerName_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___highscorePlayerName_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void GameManagerScript::SaveHighscore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript_SaveHighscore_mC42A11CABEC06B3029FBAD754C6148BF6FBD2B15 (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE353C8D9E24FEE85139CBA6A8BF1856E49036672);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (finalScore > highscore)
		int32_t L_0 = __this->___finalScore_8;
		int32_t L_1 = __this->___highscore_9;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		// PlayerPrefs.SetInt("highscore", finalScore);
		int32_t L_2 = __this->___finalScore_8;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral0650BDA6F71F11A4AF9754219872B26A597592F7, L_2, NULL);
		// PlayerPrefs.SetString("highscoreName", playerName);
		String_t* L_3 = __this->___playerName_5;
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralE353C8D9E24FEE85139CBA6A8BF1856E49036672, L_3, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void GameManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerScript__ctor_m22519EC82CC55358B36313064899C432DDDA23FC (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapManagerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_Start_m7F6AB4A97BEA0E6E104430B522A2C5212C75B291 (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) 
{
	{
		// spawnMapPosition = new Vector3(0f, 0f, 16.324f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (16.3239994f), /*hidden argument*/NULL);
		__this->___spawnMapPosition_12 = L_0;
		// MapCreate();
		MapManagerScript_MapCreate_m2C6AF022693ED78ED59B874B133093F0F364540D(__this, NULL);
		// }
		return;
	}
}
// System.Void MapManagerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_Update_mC0CBDE40A262532810985529288C3D87512FC14F (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MapManagerScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_FixedUpdate_m935080E5D9310B1F1E492AE785147B1D6F12AB30 (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MapManagerScript::MapCreate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_MapCreate_m2C6AF022693ED78ED59B874B133093F0F364540D (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (level)
		int32_t L_0 = __this->___level_10;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_1, 1)))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_007a;
			}
			case 4:
			{
				goto IL_0093;
			}
			case 5:
			{
				goto IL_00ac;
			}
		}
	}
	{
		goto IL_00ce;
	}

IL_002c:
	{
		// InstantiateMap(beginMaps);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___beginMaps_4;
		MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69(__this, L_2, NULL);
		// levelSpeedFactor = 0.8f;
		__this->___levelSpeedFactor_11 = (0.800000012f);
		// break;
		goto IL_00ce;
	}

IL_0048:
	{
		// InstantiateMap(easyMaps);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___easyMaps_5;
		MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69(__this, L_3, NULL);
		// levelSpeedFactor = 1;
		__this->___levelSpeedFactor_11 = (1.0f);
		// break;
		goto IL_00ce;
	}

IL_0061:
	{
		// InstantiateMap(middleMaps);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___middleMaps_6;
		MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69(__this, L_4, NULL);
		// levelSpeedFactor = 2;
		__this->___levelSpeedFactor_11 = (2.0f);
		// break;
		goto IL_00ce;
	}

IL_007a:
	{
		// InstantiateMap(hardMaps);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = __this->___hardMaps_7;
		MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69(__this, L_5, NULL);
		// levelSpeedFactor = 2;
		__this->___levelSpeedFactor_11 = (2.0f);
		// break;
		goto IL_00ce;
	}

IL_0093:
	{
		// InstantiateMap(impossibleMaps);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___impossibleMaps_8;
		MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69(__this, L_6, NULL);
		// levelSpeedFactor = 2;
		__this->___levelSpeedFactor_11 = (2.0f);
		// break;
		goto IL_00ce;
	}

IL_00ac:
	{
		// Instantiate(finishMap, spawnMapPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___finishMap_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___spawnMapPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// levelSpeedFactor = 1;
		__this->___levelSpeedFactor_11 = (1.0f);
	}

IL_00ce:
	{
		// spawnMapPosition.z += 16.324f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___spawnMapPosition_12);
		float* L_12 = (&L_11->___z_4);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		*((float*)L_13) = (float)((float)il2cpp_codegen_add(L_14, (16.3239994f)));
		// }
		return;
	}
}
// System.Void MapManagerScript::InstantiateMap(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript_InstantiateMap_m2C6E7914E6D8EF9A136A3D20BCFF3FCBC1B54E69 (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___map0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int mapNumber = Random.Range(0, map.Count);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = ___map0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_0, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_1, NULL);
		V_0 = L_2;
		// Instantiate(map[mapNumber], spawnMapPosition, Quaternion.identity);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = ___map0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___spawnMapPosition_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// map.RemoveAt(mapNumber);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = ___map0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260(L_9, L_10, List_1_RemoveAt_m3196E18C5CF157CAC58991FACEB9DFD441702260_RuntimeMethod_var);
		// if (map.Count == 0)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = ___map0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_11, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (L_12)
		{
			goto IL_0042;
		}
	}
	{
		// level++;
		int32_t L_13 = __this->___level_10;
		__this->___level_10 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void MapManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapManagerScript__ctor_m27C1BA3DE36A14FBB71E02D5256823F0E483599B (MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> beginMaps = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___beginMaps_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___beginMaps_4), (void*)L_0);
		// public List<GameObject> easyMaps = new List <GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___easyMaps_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easyMaps_5), (void*)L_1);
		// public List<GameObject> middleMaps = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___middleMaps_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___middleMaps_6), (void*)L_2);
		// public List<GameObject> hardMaps = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___hardMaps_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hardMaps_7), (void*)L_3);
		// public List<GameObject> impossibleMaps = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_4, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___impossibleMaps_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___impossibleMaps_8), (void*)L_4);
		// public int level = 1;
		__this->___level_10 = 1;
		// public float levelSpeedFactor = 1;
		__this->___levelSpeedFactor_11 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MapScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_Start_m141283E9E6A875ADE38E9A74F955A2AC30802857 (MapScript_tFEE449D307E272AE447ED61B3EBC149502115590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D_m3DC8A86C9900F809BCB03D30DDB30B423FB91D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisMapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E_mA0C41D66D19CC453C0F342E4151624328442542A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cameraScript = FindObjectOfType<CameraScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_0;
		L_0 = Object_FindObjectOfType_TisCameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D_m3DC8A86C9900F809BCB03D30DDB30B423FB91D81(Object_FindObjectOfType_TisCameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D_m3DC8A86C9900F809BCB03D30DDB30B423FB91D81_RuntimeMethod_var);
		__this->___cameraScript_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cameraScript_4), (void*)L_0);
		// mapManagerScript = FindObjectOfType<MapManagerScript>();
		MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* L_1;
		L_1 = Object_FindObjectOfType_TisMapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E_mA0C41D66D19CC453C0F342E4151624328442542A(Object_FindObjectOfType_TisMapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E_mA0C41D66D19CC453C0F342E4151624328442542A_RuntimeMethod_var);
		__this->___mapManagerScript_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mapManagerScript_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void MapScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript_Update_m875F2EE22BBAC95A0492EF5667B875267F05B269 (MapScript_tFEE449D307E272AE447ED61B3EBC149502115590* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(cameraScript.transform.position.z > this.transform.position.z + 7.2)
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_0 = __this->___cameraScript_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___z_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___z_4;
		if ((!(((double)((double)L_3)) > ((double)((double)il2cpp_codegen_add(((double)L_6), (7.2000000000000002)))))))
		{
			goto IL_0049;
		}
	}
	{
		// mapManagerScript.MapCreate();
		MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* L_7 = __this->___mapManagerScript_5;
		NullCheck(L_7);
		MapManagerScript_MapCreate_m2C6AF022693ED78ED59B874B133093F0F364540D(L_7, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_8, NULL);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void MapScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapScript__ctor_m5E3014681EC84EC86B28DCCFC762D3A4F71E39CD (MapScript_tFEE449D307E272AE447ED61B3EBC149502115590* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MouseScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_Awake_m3A5C03147FA4A1BF409D715239FFFB7855B459C6 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// cat = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___cat_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cat_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MouseScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_Start_mA6EF499CB7EAA8E535001AB83024DE2B25D757D2 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MouseScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_Update_mC42085C9DE9BDB470730BA6B7328BEFF67CFBCF6 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MouseScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_FixedUpdate_mD2F0CAC48006CA7AAADEF956917E929E46EA44B9 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	{
		// GorundedCheck();
		MouseScript_GorundedCheck_mA482A6E0684F66CFFBF5C92632020DBB01BA9F41(__this, NULL);
		// MouseRunning();
		MouseScript_MouseRunning_m4D3E3D60719E0938BF31A067D8A67FBE67130246(__this, NULL);
		// }
		return;
	}
}
// System.Void MouseScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_GorundedCheck_mA482A6E0684F66CFFBF5C92632020DBB01BA9F41 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	{
		// if (Physics.Raycast(this.transform.position, Vector3.down, distanceToGround + 0.1f))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_3 = __this->___distanceToGround_8;
		bool L_4;
		L_4 = Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2(L_1, L_2, ((float)il2cpp_codegen_add(L_3, (0.100000001f))), NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_7 = (bool)1;
		return;
	}

IL_002b:
	{
		// isGrounded = false;
		__this->___isGrounded_7 = (bool)0;
		// }
		return;
	}
}
// System.Void MouseScript::MouseRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript_MouseRunning_m4D3E3D60719E0938BF31A067D8A67FBE67130246 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// distance = Vector3.Distance(cat.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cat_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_4, NULL);
		__this->___distance_6 = L_5;
		// if (distance < 2.5 && isGrounded == true)
		float L_6 = __this->___distance_6;
		if ((!(((double)((double)L_6)) < ((double)(2.5)))))
		{
			goto IL_00b6;
		}
	}
	{
		bool L_7 = __this->___isGrounded_7;
		if (!L_7)
		{
			goto IL_00b6;
		}
	}
	{
		// if (rb.velocity.magnitude < 0.7f)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___rb_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_8, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		if ((!(((float)L_10) < ((float)(0.699999988f)))))
		{
			goto IL_0086;
		}
	}
	{
		// rb.AddForce((this.transform.position - cat.transform.position), ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11 = __this->___rb_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___cat_4;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_13, L_16, NULL);
		NullCheck(L_11);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_11, L_17, 2, NULL);
	}

IL_0086:
	{
		// rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = __this->___rb_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___cat_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_24, NULL);
		NullCheck(L_18);
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_18, L_25, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void MouseScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseScript__ctor_m996CFFE1291A4D760D0D29361316CB987870F0B1 (MouseScript_t85631621D59E33F342BB3743FE8E65861E90283A* __this, const RuntimeMethod* method) 
{
	{
		// private float distanceToGround = 0.208f;
		__this->___distanceToGround_8 = (0.208000004f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerAnimationScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_OnEnable_mE61395D40089649E6BF0702542981083ACB01A0F (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += CatDiedAnimation;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_OnDisable_mB5BD4346696189BC4E2ECF43162CB2DB9562FFD6 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= CatDiedAnimation;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_Awake_mEE316954F277E4E2082574B396A5FD1CF67C98F1 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = GetComponent<PlayerScript>();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E(__this, Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		__this->___playerScript_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_Start_m2073311BCF8EFFD6BED2982C1723F0FE723C75F2 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartAnimation();
		PlayerAnimationScript_StartAnimation_m7EF884AF4F58B8347B94466B7A4CBB3AE31BF213(__this, NULL);
		// gameObject.GetComponent<Animator>().SetBool("isDead", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_Update_m64922464007788F0880369D9DE497CF5A6014AF0 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	{
		// AnimationRunSpeed();
		PlayerAnimationScript_AnimationRunSpeed_mD9BA6BA4015F47550B4567A124E7AB5DCB94DBB6(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::StartAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_StartAnimation_m7EF884AF4F58B8347B94466B7A4CBB3AE31BF213 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral633C61D544C2C5E3A91845007AE974138EBCF606);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "GamePlayScene")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral633C61D544C2C5E3A91845007AE974138EBCF606, NULL);
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("isRunning", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_3, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)1, NULL);
		return;
	}

IL_0030:
	{
		// gameObject.GetComponent<Animator>().SetBool("isRunning", false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteral15C25B91D8FA3C30C0CFD33996BFCF8282A6D0D5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::CatDiedAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_CatDiedAnimation_m8346A6204BAC0ADADB645C3FF08BE5D8F6ACD1DA (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Animator>().SetBool("isDead", true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_0, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::AnimationRunSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript_AnimationRunSpeed_mD9BA6BA4015F47550B4567A124E7AB5DCB94DBB6 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616B7F5DA0EF11282D86E345D9945EC00F0F2CC1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 3f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_5;
		NullCheck(L_3);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_4 = L_3->___cameraScript_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add(L_7, (3.0f)))))))
		{
			goto IL_00b8;
		}
	}
	{
		// animationRunSpeed = PlayerMovementScript.Remap(this.transform.position.z, (playerScript.cameraScript.transform.position.z + 3f), (playerScript.cameraScript.transform.position.z + 5f), playerScript.playerInputScript.catAndCamMoveSpeed, playerScript.playerInputScript.catAndCamMoveSpeed + 1.0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_11 = __this->___playerScript_5;
		NullCheck(L_11);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_12 = L_11->___cameraScript_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_16 = __this->___playerScript_5;
		NullCheck(L_16);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_17 = L_16->___cameraScript_7;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_21 = __this->___playerScript_5;
		NullCheck(L_21);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_22 = L_21->___playerInputScript_8;
		NullCheck(L_22);
		float L_23 = L_22->___catAndCamMoveSpeed_9;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_24 = __this->___playerScript_5;
		NullCheck(L_24);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_25 = L_24->___playerInputScript_8;
		NullCheck(L_25);
		float L_26 = L_25->___catAndCamMoveSpeed_9;
		float L_27;
		L_27 = PlayerMovementScript_Remap_mAA757E959CE17955697E21BCCAF66CC86196A9C7(L_10, ((float)il2cpp_codegen_add(L_15, (3.0f))), ((float)il2cpp_codegen_add(L_20, (5.0f))), L_23, ((float)il2cpp_codegen_add(L_26, (1.0f))), NULL);
		__this->___animationRunSpeed_4 = L_27;
		goto IL_00ce;
	}

IL_00b8:
	{
		// animationRunSpeed = playerScript.playerInputScript.catAndCamMoveSpeed;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_28 = __this->___playerScript_5;
		NullCheck(L_28);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_29 = L_28->___playerInputScript_8;
		NullCheck(L_29);
		float L_30 = L_29->___catAndCamMoveSpeed_9;
		__this->___animationRunSpeed_4 = L_30;
	}

IL_00ce:
	{
		// gameObject.GetComponent<Animator>().SetFloat("runSpeed", animationRunSpeed * playerScript.playerMovementScript.levelFactor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_31);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_31, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		float L_33 = __this->___animationRunSpeed_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_34 = __this->___playerScript_5;
		NullCheck(L_34);
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_35 = L_34->___playerMovementScript_9;
		NullCheck(L_35);
		float L_36 = L_35->___levelFactor_10;
		NullCheck(L_32);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_32, _stringLiteral616B7F5DA0EF11282D86E345D9945EC00F0F2CC1, ((float)il2cpp_codegen_multiply(L_33, L_36)), NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationScript__ctor_mAAD7E78C7EDA8D18E3EBDF2CB2B22E94EDDAC649 (PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerCollisionScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionScript_Awake_mD3F19EEB883EBE15AD91E03CAFC6E43A1C331753 (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = GetComponent<PlayerScript>();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E(__this, Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		__this->___playerScript_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_9), (void*)L_0);
		// catMaterial.shader = normalMaterialShader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = __this->___catMaterial_8;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_2 = __this->___normalMaterialShader_7;
		NullCheck(L_1);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerCollisionScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionScript_OnCollisionEnter_m35D2B9E97256A9375ADEEFE0690E58E1BCE0118C (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8D3DF385DE74B4C8F7B6F38E7007D33ECC7D9E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((collision.collider.tag == "Enemy" || collision.collider.tag == "Scorpion") && isImmune == false)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___collision0;
		NullCheck(L_4);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralD8D3DF385DE74B4C8F7B6F38E7007D33ECC7D9E5, NULL);
		if (!L_7)
		{
			goto IL_007a;
		}
	}

IL_002e:
	{
		bool L_8 = __this->___isImmune_4;
		if (L_8)
		{
			goto IL_007a;
		}
	}
	{
		// playerScript.playerStatsScript.GetHit();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_9 = __this->___playerScript_9;
		NullCheck(L_9);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_10 = L_9->___playerStatsScript_11;
		NullCheck(L_10);
		PlayerStatsScript_GetHit_m5789F1A7C8C12C92D83C2F78934BD498EEE7215A(L_10, NULL);
		// playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.hitSound);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_11 = __this->___playerScript_9;
		NullCheck(L_11);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_12 = L_11->___playerSoundManagerScript_13;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_13 = __this->___playerScript_9;
		NullCheck(L_13);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_14 = L_13->___playerSoundManagerScript_13;
		NullCheck(L_14);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_15 = L_14->___hitSound_5;
		NullCheck(L_12);
		PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43(L_12, L_15, NULL);
		// isImmune = true;
		__this->___isImmune_4 = (bool)1;
		// StartCoroutine(CatIsImmune());
		RuntimeObject* L_16;
		L_16 = PlayerCollisionScript_CatIsImmune_mC208D949FE09B268EE703ECBC696315B71D18D04(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_17;
		L_17 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_16, NULL);
	}

IL_007a:
	{
		// if(collision.collider.tag == "Mouse")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_18 = ___collision0;
		NullCheck(L_18);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19;
		L_19 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_19, NULL);
		bool L_21;
		L_21 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_20, _stringLiteral294F098A1D5E681EDEE8F43BFA8F45CFBA5798A7, NULL);
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_22 = ___collision0;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_22, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_23, NULL);
		// playerScript.playerStatsScript.MouseAdd();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_24 = __this->___playerScript_9;
		NullCheck(L_24);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_25 = L_24->___playerStatsScript_11;
		NullCheck(L_25);
		PlayerStatsScript_MouseAdd_m633CAC0290EF65AA0273F8771893DD43525D9F16(L_25, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void PlayerCollisionScript::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionScript_OnTriggerEnter_m75B228EDA1A4DBBD7CA91AE7F03BAB8EDC2A7594 (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___trigger0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0481F854A053F68BE695FD9A860E999209200901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56408C9D77F202140AC6F89C53E7FD72B601C852);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (trigger.tag == "Kocimietka" || trigger.tag == "Milk")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___trigger0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral56408C9D77F202140AC6F89C53E7FD72B601C852, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___trigger0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_4, _stringLiteral0481F854A053F68BE695FD9A860E999209200901, NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}

IL_0024:
	{
		// Destroy(trigger.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___trigger0;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// playerScript.playerStatsScript.EnergyAdd();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_8 = __this->___playerScript_9;
		NullCheck(L_8);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_9 = L_8->___playerStatsScript_11;
		NullCheck(L_9);
		PlayerStatsScript_EnergyAdd_m44A391E5CBC9204053D250DBC8BDB80FED829CFF(L_9, NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerCollisionScript::CatIsImmune()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerCollisionScript_CatIsImmune_mC208D949FE09B268EE703ECBC696315B71D18D04 (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* L_0 = (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9*)il2cpp_codegen_object_new(U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCatIsImmuneU3Ed__9__ctor_mF3A3C5A43EDC602E989EED53ABA50F23BEC44C8A(L_0, 0, NULL);
		U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerCollisionScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollisionScript__ctor_m9FF1CC74F52B308FB6097CC783928E6D90A021EC (PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* __this, const RuntimeMethod* method) 
{
	{
		// float immuneTime = 2f;
		__this->___immuneTime_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerCollisionScript/<CatIsImmune>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCatIsImmuneU3Ed__9__ctor_mF3A3C5A43EDC602E989EED53ABA50F23BEC44C8A (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerCollisionScript/<CatIsImmune>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCatIsImmuneU3Ed__9_System_IDisposable_Dispose_m54F608421917C737053F687D26BD7DD6AB0D6A24 (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerCollisionScript/<CatIsImmune>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCatIsImmuneU3Ed__9_MoveNext_m214F12F6162BE903022645554915E9CC7ABB9C15 (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float immuneTimeStart = Time.time;
		float L_4;
		L_4 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___U3CimmuneTimeStartU3E5__2_3 = L_4;
		goto IL_0053;
	}

IL_002b:
	{
		// catMaterial.shader = immuneMaterialShader;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_5 = V_1;
		NullCheck(L_5);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = L_5->___catMaterial_8;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_7 = V_1;
		NullCheck(L_7);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_8 = L_7->___immuneMaterialShader_6;
		NullCheck(L_6);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_6, L_8, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0053:
	{
		// while (Time.time < immuneTimeStart + immuneTime)
		float L_9;
		L_9 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_10 = __this->___U3CimmuneTimeStartU3E5__2_3;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___immuneTime_5;
		if ((((float)L_9) < ((float)((float)il2cpp_codegen_add(L_10, L_12)))))
		{
			goto IL_002b;
		}
	}
	{
		// catMaterial.shader = normalMaterialShader;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_13 = V_1;
		NullCheck(L_13);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = L_13->___catMaterial_8;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_15 = V_1;
		NullCheck(L_15);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_16 = L_15->___normalMaterialShader_7;
		NullCheck(L_14);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_14, L_16, NULL);
		// isImmune = false;
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_17 = V_1;
		NullCheck(L_17);
		L_17->___isImmune_4 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerCollisionScript/<CatIsImmune>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCatIsImmuneU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD40EFF34D041111C6EA521352F6C6F4809AE5499 (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerCollisionScript/<CatIsImmune>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCatIsImmuneU3Ed__9_System_Collections_IEnumerator_Reset_mBBDD2BC515F656C35B12DC48A4C5EA07F4F61D22 (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCatIsImmuneU3Ed__9_System_Collections_IEnumerator_Reset_mBBDD2BC515F656C35B12DC48A4C5EA07F4F61D22_RuntimeMethod_var)));
	}
}
// System.Object PlayerCollisionScript/<CatIsImmune>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCatIsImmuneU3Ed__9_System_Collections_IEnumerator_get_Current_mBB07AB4538E954A9A73F76BD9403B9E71932ADD2 (U3CCatIsImmuneU3Ed__9_t419B8F7A4E762C40EF41DB931CD8C21978F5E6B9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerInputScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_OnEnable_mA0A8E45BAD04B465765DA1D05EF2BD75E95F8065 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += StopMoving;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// SceneManagerScript.Pause += StopMoving;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_1, __this, (intptr_t)((void*)PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var), NULL);
		SceneManagerScript_add_Pause_m389993B414D86F7A75BACD527CAD35136091224B(L_1, NULL);
		// SceneManagerScript.Resume += StartMoving;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_2, __this, (intptr_t)((void*)PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var), NULL);
		SceneManagerScript_add_Resume_m066069A674195FE1619145F87CCFBF193416F80E(L_2, NULL);
		// CountDownScript.StartGo += StartMoving;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)il2cpp_codegen_object_new(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B(L_3, __this, (intptr_t)((void*)PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var), NULL);
		CountDownScript_add_StartGo_m57912379F8E324F7F364EBBA11E63F2961EA8FF3(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_OnDisable_mD79DCC092DBB83381B3BA4ED84452F77017D6F74 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= StopMoving;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// SceneManagerScript.Pause -= StopMoving;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_1, __this, (intptr_t)((void*)PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37_RuntimeMethod_var), NULL);
		SceneManagerScript_remove_Pause_m15AAA65C668421E6E28ABD3A925B2E22D3D2DBEA(L_1, NULL);
		// SceneManagerScript.Resume -= StartMoving;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_2, __this, (intptr_t)((void*)PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var), NULL);
		SceneManagerScript_remove_Resume_m1E1A22F9FA45E2047D732EB0B96E893A262A9BC1(L_2, NULL);
		// CountDownScript.StartGo -= StartMoving;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)il2cpp_codegen_object_new(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B(L_3, __this, (intptr_t)((void*)PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529_RuntimeMethod_var), NULL);
		CountDownScript_remove_StartGo_m533C45162BE4E5362A4AD364BA8FF79043579EFF(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_Awake_m60A8B297D42A19683FE2A36EE5CA15DA8F0D6672 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = GetComponent<PlayerScript>();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E(__this, Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		__this->___playerScript_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_5), (void*)L_0);
		// playerRigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___playerRigidBody_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRigidBody_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerInputScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_Start_m5D90188C65D2038EF880B58B2D40C8679D4876E2 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_mCBE1D73E390BBAFF3BAA90D2C0D6C2DEA1EC38FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joystick = FindObjectOfType<Joystick>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0;
		L_0 = Object_FindObjectOfType_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_mCBE1D73E390BBAFF3BAA90D2C0D6C2DEA1EC38FA(Object_FindObjectOfType_TisJoystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A_mCBE1D73E390BBAFF3BAA90D2C0D6C2DEA1EC38FA_RuntimeMethod_var);
		__this->___joystick_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___joystick_4), (void*)L_0);
		// StopMoving();
		PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_Update_mC194E51E4C11D38A5E363B4341CC6D340FD50844 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	{
		// PlayerInput();
		PlayerInputScript_PlayerInput_m23F8D44C34267502D7ED45DF1939D351E5D30198(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerInputScript::PlayerInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_PlayerInput_m23F8D44C34267502D7ED45DF1939D351E5D30198 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (joystick != null && playerScript.catHasDied == false)
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_0 = __this->___joystick_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_2 = __this->___playerScript_5;
		NullCheck(L_2);
		bool L_3 = L_2->___catHasDied_21;
		if (L_3)
		{
			goto IL_0081;
		}
	}
	{
		// catVelocity = new Vector3(joystick.Horizontal * catMoveSpeed, playerRigidBody.velocity.y, joystick.Vertical * catMoveSpeed);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_4 = __this->___joystick_4;
		NullCheck(L_4);
		float L_5;
		L_5 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_4, NULL);
		float L_6 = __this->___catMoveSpeed_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___playerRigidBody_6;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_7, NULL);
		float L_9 = L_8.___y_3;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_10 = __this->___joystick_4;
		NullCheck(L_10);
		float L_11;
		L_11 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_10, NULL);
		float L_12 = __this->___catMoveSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), ((float)il2cpp_codegen_multiply(L_5, L_6)), L_9, ((float)il2cpp_codegen_multiply(L_11, L_12)), /*hidden argument*/NULL);
		__this->___catVelocity_11 = L_13;
		// angle = Mathf.Atan2(joystick.Horizontal, joystick.Vertical) * Mathf.Rad2Deg;
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_14 = __this->___joystick_4;
		NullCheck(L_14);
		float L_15;
		L_15 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_14, NULL);
		Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* L_16 = __this->___joystick_4;
		NullCheck(L_16);
		float L_17;
		L_17 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_16, NULL);
		float L_18;
		L_18 = atan2f(L_15, L_17);
		__this->___angle_7 = ((float)il2cpp_codegen_multiply(L_18, (57.2957802f)));
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void PlayerInputScript::StopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_StopMoving_m50D55C5D5A8A49A0D952496B4D756AC5A2235B37 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	{
		// catMoveSpeed = 0;
		__this->___catMoveSpeed_8 = (0.0f);
		// catAndCamMoveSpeed = 0;
		__this->___catAndCamMoveSpeed_9 = (0.0f);
		// catConstantSpeed = 0;
		__this->___catConstantSpeed_10 = (0.0f);
		// angle = -180;
		__this->___angle_7 = (-180.0f);
		// }
		return;
	}
}
// System.Void PlayerInputScript::StartMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript_StartMoving_mACE73AE04D3586E56366992E05811B03AC722529 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	{
		// catMoveSpeed = 2.5f;
		__this->___catMoveSpeed_8 = (2.5f);
		// catConstantSpeed = 55;
		__this->___catConstantSpeed_10 = (55.0f);
		// catAndCamMoveSpeed = 2.0f;
		__this->___catAndCamMoveSpeed_9 = (2.0f);
		// }
		return;
	}
}
// System.Void PlayerInputScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInputScript__ctor_m16F1AA5F519C8F75D36D9953C7CEC2A54311F194 (PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerMovementScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_OnEnable_mFBE399C12B3D8A33032384C02559DBB92EDAB444 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += CatOutOfMapReset;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_OnDisable_mC4AF1DC0CDE68E4D75165415C20D7EC4117565B2 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= CatOutOfMapReset;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_Awake_m4FDC58C8AC72E33CAF8D5A3956799D8E5D4F6F34 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = GetComponent<PlayerScript>();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E(__this, Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		__this->___playerScript_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_5), (void*)L_0);
		// playerRigidBody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___playerRigidBody_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRigidBody_4), (void*)L_1);
		// catOutOfMap = false;
		__this->___catOutOfMap_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMovementScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_Start_mC9282801249574454F30100307733BE3C6B58BDF (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerMovementScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_Update_mEE81E4C81F2E0BDA768B0FD44F72BBFBF42026D9 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// levelFactor = 1.0f + (playerScript.mapManagerScript.levelSpeedFactor * 0.2f);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_5;
		NullCheck(L_0);
		MapManagerScript_t47046C88A87A26F5DC58FA2CB393B460083C2F7E* L_1 = L_0->___mapManagerScript_16;
		NullCheck(L_1);
		float L_2 = L_1->___levelSpeedFactor_11;
		__this->___levelFactor_10 = ((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply(L_2, (0.200000003f)))));
		// PlayerFallCheck();
		PlayerMovementScript_PlayerFallCheck_mC4EDAF463E4ADF11719D522364B9AAE72E2E1360(__this, NULL);
		// PlayerRotate(playerScript.playerInputScript.angle);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_5;
		NullCheck(L_3);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_4 = L_3->___playerInputScript_8;
		NullCheck(L_4);
		float L_5 = L_4->___angle_7;
		PlayerMovementScript_PlayerRotate_m5591793B076B7D62328CAA57D9149EDAEE3BD88E(__this, L_5, NULL);
		// if (isGrounded)
		bool L_6 = __this->___isGrounded_9;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// PlayerMovableArea();
		PlayerMovementScript_PlayerMovableArea_mA6E09565739AF5DC8CE17697576CE2ABF58F3367(__this, NULL);
	}

IL_004c:
	{
		// ForwardSpeedFactor();
		PlayerMovementScript_ForwardSpeedFactor_m0486D844FDD5A2DC4C89FC0411EC8DDFBFAB5B39(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_FixedUpdate_mA6B708411855D3208E23404FA21D4985365F0187 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// GorundedCheck();
		PlayerMovementScript_GorundedCheck_m26945CEC877B1690F920BF2EB37384D6B25DB813(__this, NULL);
		// if (playerScript.catHasDied == false && isGrounded == true)
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_5;
		NullCheck(L_0);
		bool L_1 = L_0->___catHasDied_21;
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2 = __this->___isGrounded_9;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// PlayerConstantMove();
		PlayerMovementScript_PlayerConstantMove_mF1023FDA56950AC8DA549318FA5420C1A8640A63(__this, NULL);
		// PLayerMove();
		PlayerMovementScript_PLayerMove_mDEC8D918F740BFA3530F7E3A7FF53BF6DA078296(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void PlayerMovementScript::PlayerConstantMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerConstantMove_mF1023FDA56950AC8DA549318FA5420C1A8640A63 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// playerRigidBody.AddForce(new Vector3(0f, 0f, playerScript.playerInputScript.catAndCamMoveSpeed * playerScript.playerInputScript.catConstantSpeed * forwardSpeedFactor * levelFactor), ForceMode.Force);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___playerRigidBody_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_1 = __this->___playerScript_5;
		NullCheck(L_1);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_2 = L_1->___playerInputScript_8;
		NullCheck(L_2);
		float L_3 = L_2->___catAndCamMoveSpeed_9;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_4 = __this->___playerScript_5;
		NullCheck(L_4);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_5 = L_4->___playerInputScript_8;
		NullCheck(L_5);
		float L_6 = L_5->___catConstantSpeed_10;
		float L_7 = __this->___forwardSpeedFactor_6;
		float L_8 = __this->___levelFactor_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_6)), L_7)), L_8)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_0, L_9, 0, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::PLayerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PLayerMove_mDEC8D918F740BFA3530F7E3A7FF53BF6DA078296 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// playerRigidBody.velocity = playerScript.playerInputScript.catVelocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___playerRigidBody_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_1 = __this->___playerScript_5;
		NullCheck(L_1);
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_2 = L_1->___playerInputScript_8;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___catVelocity_11;
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::PlayerRotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerRotate_m5591793B076B7D62328CAA57D9149EDAEE3BD88E (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, float ___x0, const RuntimeMethod* method) 
{
	{
		// if (x > (-30) && x < 30)
		float L_0 = ___x0;
		if ((!(((float)L_0) > ((float)(-30.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		float L_1 = ___x0;
		if ((!(((float)L_1) < ((float)(30.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0f, x + 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_3 = ___x0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)il2cpp_codegen_add(L_3, (180.0f))), (0.0f), NULL);
		NullCheck(L_2);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_2, L_4, NULL);
		return;
	}

IL_0032:
	{
		// else if (x <= (-30) && x > (-150))
		float L_5 = ___x0;
		if ((!(((float)L_5) <= ((float)(-30.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		float L_6 = ___x0;
		if ((!(((float)L_6) > ((float)(-150.0f)))))
		{
			goto IL_0062;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0f, (-30) + 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (150.0f), (0.0f), NULL);
		NullCheck(L_7);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_7, L_8, NULL);
		return;
	}

IL_0062:
	{
		// else if (x <= (-150))
		float L_9 = ___x0;
		if ((!(((float)L_9) <= ((float)(-150.0f)))))
		{
			goto IL_0093;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0f, (-(x + 180)) + 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = ___x0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)il2cpp_codegen_add(((-((float)il2cpp_codegen_add(L_11, (180.0f))))), (180.0f))), (0.0f), NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
		return;
	}

IL_0093:
	{
		// else if (x >= 30 && x < 150)
		float L_13 = ___x0;
		if ((!(((float)L_13) >= ((float)(30.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_14 = ___x0;
		if ((!(((float)L_14) < ((float)(150.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0f, 30 + 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (210.0f), (0.0f), NULL);
		NullCheck(L_15);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_15, L_16, NULL);
		return;
	}

IL_00c3:
	{
		// else if (x >= 150)
		float L_17 = ___x0;
		if ((!(((float)L_17) >= ((float)(150.0f)))))
		{
			goto IL_00f4;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0f, (-(x - 180)) + 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_19 = ___x0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), ((float)il2cpp_codegen_add(((-((float)il2cpp_codegen_subtract(L_19, (180.0f))))), (180.0f))), (0.0f), NULL);
		NullCheck(L_18);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_20, NULL);
		return;
	}

IL_00f4:
	{
		// transform.rotation = Quaternion.Euler(0f, 180, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		NullCheck(L_21);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_21, L_22, NULL);
		// }
		return;
	}
}
// System.Void PlayerMovementScript::PlayerMovableArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerMovableArea_mA6E09565739AF5DC8CE17697576CE2ABF58F3367 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// if (this.transform.position.z < playerScript.cameraScript.transform.position.z + 0.7f && playerScript.catHasDied == false)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_5;
		NullCheck(L_3);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_4 = L_3->___cameraScript_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		if ((!(((float)L_2) < ((float)((float)il2cpp_codegen_add(L_7, (0.699999988f)))))))
		{
			goto IL_0048;
		}
	}
	{
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_8 = __this->___playerScript_5;
		NullCheck(L_8);
		bool L_9 = L_8->___catHasDied_21;
		if (L_9)
		{
			goto IL_0048;
		}
	}
	{
		// catOutOfMap = true;
		__this->___catOutOfMap_7 = (bool)1;
		goto IL_004f;
	}

IL_0048:
	{
		// catOutOfMap = false;
		__this->___catOutOfMap_7 = (bool)0;
	}

IL_004f:
	{
		// if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 4f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_13 = __this->___playerScript_5;
		NullCheck(L_13);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_14 = L_13->___cameraScript_7;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		if ((!(((float)L_12) > ((float)((float)il2cpp_codegen_add(L_17, (4.0f)))))))
		{
			goto IL_00d1;
		}
	}
	{
		// this.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, playerScript.cameraScript.transform.position.z + 4f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_25 = __this->___playerScript_5;
		NullCheck(L_25);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_26 = L_25->___cameraScript_7;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_30), L_21, L_24, ((float)il2cpp_codegen_add(L_29, (4.0f))), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_30, NULL);
	}

IL_00d1:
	{
		// }
		return;
	}
}
// System.Void PlayerMovementScript::PlayerFallCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_PlayerFallCheck_mC4EDAF463E4ADF11719D522364B9AAE72E2E1360 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// if (this.transform.position.y < -2.0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		if ((!(((double)((double)L_2)) < ((double)(-2.0)))))
		{
			goto IL_0024;
		}
	}
	{
		// catOutOfMap = true;
		__this->___catOutOfMap_7 = (bool)1;
		return;
	}

IL_0024:
	{
		// catOutOfMap = false;
		__this->___catOutOfMap_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMovementScript::CatOutOfMapReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_CatOutOfMapReset_mF857EAD0288F924EBB23BADC13193EFD20C345D9 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// catOutOfMap = false;
		__this->___catOutOfMap_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMovementScript::ForwardSpeedFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_ForwardSpeedFactor_m0486D844FDD5A2DC4C89FC0411EC8DDFBFAB5B39 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// if (this.transform.position.z > playerScript.cameraScript.transform.position.z + 4.8f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_5;
		NullCheck(L_3);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_4 = L_3->___cameraScript_7;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___z_4;
		if ((!(((float)L_2) > ((float)((float)il2cpp_codegen_add(L_7, (4.80000019f)))))))
		{
			goto IL_0098;
		}
	}
	{
		// forwardSpeedFactor = Remap(this.transform.position.z, (playerScript.cameraScript.transform.position.z + 3.8f), (playerScript.cameraScript.transform.position.z + 4f), 1, 1.3f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_11 = __this->___playerScript_5;
		NullCheck(L_11);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_12 = L_11->___cameraScript_7;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___z_4;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_16 = __this->___playerScript_5;
		NullCheck(L_16);
		CameraScript_t33AE9F59882E201924EADF681468E25A59DFD44D* L_17 = L_16->___cameraScript_7;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___z_4;
		float L_21;
		L_21 = PlayerMovementScript_Remap_mAA757E959CE17955697E21BCCAF66CC86196A9C7(L_10, ((float)il2cpp_codegen_add(L_15, (3.79999995f))), ((float)il2cpp_codegen_add(L_20, (4.0f))), (1.0f), (1.29999995f), NULL);
		__this->___forwardSpeedFactor_6 = L_21;
		return;
	}

IL_0098:
	{
		// forwardSpeedFactor = 1;
		__this->___forwardSpeedFactor_6 = (1.0f);
		// }
		return;
	}
}
// System.Single PlayerMovementScript::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerMovementScript_Remap_mAA757E959CE17955697E21BCCAF66CC86196A9C7 (float ___x0, float ___a1, float ___b2, float ___c3, float ___d4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float fraction = (x - a) / (b - a);
		float L_0 = ___x0;
		float L_1 = ___a1;
		float L_2 = ___b2;
		float L_3 = ___a1;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/((float)il2cpp_codegen_subtract(L_2, L_3))));
		// return Mathf.Lerp(c, d, fraction);
		float L_4 = ___c3;
		float L_5 = ___d4;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void PlayerMovementScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript_GorundedCheck_m26945CEC877B1690F920BF2EB37384D6B25DB813 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// if (Physics.Raycast(this.transform.position, Vector3.down, distanceToGround + 0.1f))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_3 = __this->___distanceToGround_8;
		bool L_4;
		L_4 = Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2(L_1, L_2, ((float)il2cpp_codegen_add(L_3, (0.100000001f))), NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_9 = (bool)1;
		return;
	}

IL_002b:
	{
		// isGrounded = false;
		__this->___isGrounded_9 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerMovementScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovementScript__ctor_m403FE86408D2BE40731AD17682AFAC5C3FD7DB94 (PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* __this, const RuntimeMethod* method) 
{
	{
		// private float distanceToGround = 1.95f;
		__this->___distanceToGround_8 = (1.95000005f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerScript::add_CatDied(PlayerScript/PlayerDied)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8 (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_0 = NULL;
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_1 = NULL;
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_2 = NULL;
	{
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = ((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_1 = V_0;
		V_1 = L_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_2 = V_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)CastclassSealed((RuntimeObject*)L_4, PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var));
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_5 = V_2;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_6 = V_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*>((&((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4), L_5, L_6);
		V_0 = L_7;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_8 = V_0;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)L_8) == ((RuntimeObject*)(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerScript::remove_CatDied(PlayerScript/PlayerDied)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_0 = NULL;
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_1 = NULL;
	PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* V_2 = NULL;
	{
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = ((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4;
		V_0 = L_0;
	}

IL_0006:
	{
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_1 = V_0;
		V_1 = L_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_2 = V_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)CastclassSealed((RuntimeObject*)L_4, PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var));
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_5 = V_2;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_6 = V_1;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_7;
		L_7 = InterlockedCompareExchangeImpl<PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*>((&((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4), L_5, L_6);
		V_0 = L_7;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_8 = V_0;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_9 = V_1;
		if ((!(((RuntimeObject*)(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)L_8) == ((RuntimeObject*)(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PlayerScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_Awake_m5A1E958C0C25BF2C732D455AA03CD255EC9D2559 (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393_mC3EF7771E57DC03399919FD7E4B4DE86E7D58EA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755_m05DABD4C99F0C3A00A5BF3590FFBF93362700970_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59_mEE3A6FC2A13591DD07112B169DB77745711DA520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31_m7E87653AF1C479230A11E122F8665CB5D38BE97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4_m57F6E9C899E0DDE73BF599CB8917B47E769C9F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF_mA252DE8A838CD58E5EBE5FC69D9F42CF482705F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisCountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_m1C81F1FCD2F87062B574C1A33296733D239EC003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E_m3C966940406FE2527B26C54FB8BD7836A3D12936_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInputScript = GetComponent<PlayerInputScript>();
		PlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59* L_0;
		L_0 = Component_GetComponent_TisPlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59_mEE3A6FC2A13591DD07112B169DB77745711DA520(__this, Component_GetComponent_TisPlayerInputScript_t6D9AA3A71771EFFB450335857968D6A177F50F59_mEE3A6FC2A13591DD07112B169DB77745711DA520_RuntimeMethod_var);
		__this->___playerInputScript_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInputScript_8), (void*)L_0);
		// playerMovementScript = GetComponent<PlayerMovementScript>();
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_1;
		L_1 = Component_GetComponent_TisPlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31_m7E87653AF1C479230A11E122F8665CB5D38BE97D(__this, Component_GetComponent_TisPlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31_m7E87653AF1C479230A11E122F8665CB5D38BE97D_RuntimeMethod_var);
		__this->___playerMovementScript_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerMovementScript_9), (void*)L_1);
		// playerCollisionScript = GetComponent<PlayerCollisionScript>();
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_2;
		L_2 = Component_GetComponent_TisPlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755_m05DABD4C99F0C3A00A5BF3590FFBF93362700970(__this, Component_GetComponent_TisPlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755_m05DABD4C99F0C3A00A5BF3590FFBF93362700970_RuntimeMethod_var);
		__this->___playerCollisionScript_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCollisionScript_10), (void*)L_2);
		// playerStatsScript = GetComponent<PlayerStatsScript>();
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_3;
		L_3 = Component_GetComponent_TisPlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF_mA252DE8A838CD58E5EBE5FC69D9F42CF482705F9(__this, Component_GetComponent_TisPlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF_mA252DE8A838CD58E5EBE5FC69D9F42CF482705F9_RuntimeMethod_var);
		__this->___playerStatsScript_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerStatsScript_11), (void*)L_3);
		// playerAnimationScript = GetComponent<PlayerAnimationScript>();
		PlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393* L_4;
		L_4 = Component_GetComponent_TisPlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393_mC3EF7771E57DC03399919FD7E4B4DE86E7D58EA7(__this, Component_GetComponent_TisPlayerAnimationScript_t3D052CFD6F07F32E0E125798BB31C9B1387A2393_mC3EF7771E57DC03399919FD7E4B4DE86E7D58EA7_RuntimeMethod_var);
		__this->___playerAnimationScript_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerAnimationScript_12), (void*)L_4);
		// playerSoundManagerScript = GetComponent<PlayerSoundManagerScript>();
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_5;
		L_5 = Component_GetComponent_TisPlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4_m57F6E9C899E0DDE73BF599CB8917B47E769C9F6F(__this, Component_GetComponent_TisPlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4_m57F6E9C899E0DDE73BF599CB8917B47E769C9F6F_RuntimeMethod_var);
		__this->___playerSoundManagerScript_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerSoundManagerScript_13), (void*)L_5);
		// countDownScript = FindObjectOfType<CountDownScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_6;
		L_6 = Object_FindObjectOfType_TisCountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_m1C81F1FCD2F87062B574C1A33296733D239EC003(Object_FindObjectOfType_TisCountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869_m1C81F1FCD2F87062B574C1A33296733D239EC003_RuntimeMethod_var);
		__this->___countDownScript_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___countDownScript_14), (void*)L_6);
		// scoreScript = FindObjectOfType<ScoreScript>();
		ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* L_7;
		L_7 = Object_FindObjectOfType_TisScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E_m3C966940406FE2527B26C54FB8BD7836A3D12936(Object_FindObjectOfType_TisScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E_m3C966940406FE2527B26C54FB8BD7836A3D12936_RuntimeMethod_var);
		__this->___scoreScript_15 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreScript_15), (void*)L_7);
		// catHasDied = false;
		__this->___catHasDied_21 = (bool)0;
		// catFinish = false;
		__this->___catFinish_22 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_Start_m0290AFEEFA15E6EF748CB2003346C933C5F65C7E (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	{
		// TextureSet();
		PlayerScript_TextureSet_m4AAA7C7E2CFD1C29C7C6964EC359770ECF497650(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerScript::TextureSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_TextureSet_m4AAA7C7E2CFD1C29C7C6964EC359770ECF497650 (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManagerScript.instance.playerMaterialTexture != null)
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0;
		L_0 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_0);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = L_0->___playerMaterialTexture_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// catMaterial.SetTexture("_BaseMap", GameManagerScript.instance.playerMaterialTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___catMaterial_18;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_4;
		L_4 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_4);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = L_4->___playerMaterialTexture_7;
		NullCheck(L_3);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_3, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, L_5, NULL);
		return;
	}

IL_002d:
	{
		// catMaterial.SetTexture("_BaseMap", defaultTexture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___catMaterial_18;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_7 = __this->___defaultTexture_19;
		NullCheck(L_6);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_6, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, L_7, NULL);
		// }
		return;
	}
}
// System.Void PlayerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_Update_m4D494E3B0D30EA109D7BCFFF6C40085D429E68B0 (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	{
		// CatDead();
		PlayerScript_CatDead_mA40421D639F99E762BAD540243AC62CEC3E9E94B(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerScript::CatDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript_CatDead_mA40421D639F99E762BAD540243AC62CEC3E9E94B (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerMovementScript.catOutOfMap == true || playerStatsScript.catOutOfLife == true || catFinish == true)
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_0 = __this->___playerMovementScript_9;
		NullCheck(L_0);
		bool L_1 = L_0->___catOutOfMap_7;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_2 = __this->___playerStatsScript_11;
		NullCheck(L_2);
		bool L_3 = L_2->___catOutOfLife_10;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		bool L_4 = __this->___catFinish_22;
		if (!L_4)
		{
			goto IL_006a;
		}
	}

IL_0022:
	{
		// if (playerMovementScript.catOutOfMap == true || playerStatsScript.catOutOfLife == true)
		PlayerMovementScript_tFD8F862373830F6F66126822FCC5D5D622F0AE31* L_5 = __this->___playerMovementScript_9;
		NullCheck(L_5);
		bool L_6 = L_5->___catOutOfMap_7;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_7 = __this->___playerStatsScript_11;
		NullCheck(L_7);
		bool L_8 = L_7->___catOutOfLife_10;
		if (!L_8)
		{
			goto IL_0052;
		}
	}

IL_003c:
	{
		// playerSoundManagerScript.PlaySound(playerSoundManagerScript.hitSound);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_9 = __this->___playerSoundManagerScript_13;
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_10 = __this->___playerSoundManagerScript_13;
		NullCheck(L_10);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = L_10->___hitSound_5;
		NullCheck(L_9);
		PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43(L_9, L_11, NULL);
	}

IL_0052:
	{
		// catHasDied = true;
		__this->___catHasDied_21 = (bool)1;
		// if (CatDied != null)
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_12 = ((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4;
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// CatDied();
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_13 = ((PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_StaticFields*)il2cpp_codegen_static_fields_for(PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_il2cpp_TypeInfo_var))->___CatDied_4;
		NullCheck(L_13);
		PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_inline(L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void PlayerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerScript__ctor_m204704D8E019627DDF740B7E8B5F9B579CA4FF57 (PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_Multicast(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* currentDelegate = reinterpret_cast<PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_Open(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_OpenStaticInvoker(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_ClosedStaticInvoker(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void PlayerScript/PlayerDied::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283 (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_Multicast;
}
// System.Void PlayerScript/PlayerDied::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28 (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlayerScript/PlayerDied::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerDied_BeginInvoke_mBCB22423613B8297B90A8783981BFD3AE5F116AC (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void PlayerScript/PlayerDied::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerDied_EndInvoke_m855FD8CD64A5528A5024EACF4B52B5F09A6F6BBB (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerSoundManagerScript::PlaySound(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43 (PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sound0, const RuntimeMethod* method) 
{
	{
		// sound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = ___sound0;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerSoundManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSoundManagerScript__ctor_mFDC8968B8D0B6C401EF283BD9B4744C56A2961AE (PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerStatsScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_OnEnable_mB66E30EBFC112295B5F0486A0AEF8EC757E98EE8 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += CatStatReset;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// SceneManagerScript.Pause += StopStats;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_1, __this, (intptr_t)((void*)PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB_RuntimeMethod_var), NULL);
		SceneManagerScript_add_Pause_m389993B414D86F7A75BACD527CAD35136091224B(L_1, NULL);
		// SceneManagerScript.Resume += StartStats;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_2, __this, (intptr_t)((void*)PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var), NULL);
		SceneManagerScript_add_Resume_m066069A674195FE1619145F87CCFBF193416F80E(L_2, NULL);
		// CountDownScript.StartGo += StartStats;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)il2cpp_codegen_object_new(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B(L_3, __this, (intptr_t)((void*)PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var), NULL);
		CountDownScript_add_StartGo_m57912379F8E324F7F364EBBA11E63F2961EA8FF3(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_OnDisable_m40800C0686381CA3B645E2EA641907952BCD3C6E (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= CatStatReset;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// SceneManagerScript.Pause -= StopStats;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_1, __this, (intptr_t)((void*)PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB_RuntimeMethod_var), NULL);
		SceneManagerScript_remove_Pause_m15AAA65C668421E6E28ABD3A925B2E22D3D2DBEA(L_1, NULL);
		// SceneManagerScript.Resume -= StartStats;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)il2cpp_codegen_object_new(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032(L_2, __this, (intptr_t)((void*)PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var), NULL);
		SceneManagerScript_remove_Resume_m1E1A22F9FA45E2047D732EB0B96E893A262A9BC1(L_2, NULL);
		// CountDownScript.StartGo -= StartStats;
		StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* L_3 = (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2*)il2cpp_codegen_object_new(StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StartGame__ctor_m4EC0AFB7D831E6B01C2C636139D752D7F7973B3B(L_3, __this, (intptr_t)((void*)PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F_RuntimeMethod_var), NULL);
		CountDownScript_remove_StartGo_m533C45162BE4E5362A4AD364BA8FF79043579EFF(L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_Awake_mE711B559037ED76C1C80A509E58D51CAC571824A (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = GetComponent<PlayerScript>();
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E(__this, Component_GetComponent_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_m380964C66BCEBC9E3357D5256999BF88D7BBA10E_RuntimeMethod_var);
		__this->___playerScript_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_4), (void*)L_0);
		// catOutOfLife = false;
		__this->___catOutOfLife_10 = (bool)0;
		// pauseStats = false;
		__this->___pauseStats_11 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerStatsScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_Start_m3092A1E441E33CF8CCEC6C01A7BB1059C588BE4D (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// StopStats();
		PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB(__this, NULL);
		// SetMaxSliderValue();
		PlayerStatsScript_SetMaxSliderValue_m6344ECD05EFEE9289E3DEF1500ABACCF8B327DAC(__this, NULL);
		// SetStartValue();
		PlayerStatsScript_SetStartValue_m7CBFE19E47A94B5B03819787C84C1391C4C42242(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::SetMaxSliderValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_SetMaxSliderValue_m6344ECD05EFEE9289E3DEF1500ABACCF8B327DAC (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// playerScript.sliderScript.SetMaxSliderValue(playerScript.sliderScript.EnergySlider, maxEnergy);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_4;
		NullCheck(L_0);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_1 = L_0->___sliderScript_5;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_2 = __this->___playerScript_4;
		NullCheck(L_2);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_3 = L_2->___sliderScript_5;
		NullCheck(L_3);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = L_3->___EnergySlider_4;
		int32_t L_5 = __this->___maxEnergy_5;
		NullCheck(L_1);
		SliderScript_SetMaxSliderValue_mDFBF47C5C39CC55291205699AD90A0DE63241523(L_1, L_4, L_5, NULL);
		// playerScript.sliderLifeScript.SetMaxSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, maxLife);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_6 = __this->___playerScript_4;
		NullCheck(L_6);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_7 = L_6->___sliderLifeScript_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_8 = __this->___playerScript_4;
		NullCheck(L_8);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_9 = L_8->___sliderLifeScript_6;
		NullCheck(L_9);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = L_9->___LifeSlider_4;
		int32_t L_11 = __this->___maxLife_6;
		NullCheck(L_7);
		SliderLifeScript_SetMaxSliderLifeValue_m69D70E8661BC8333B931345D1465D807E90E4CE1(L_7, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_Update_m15DDC9B16E6C8D29D24F283E57D5FDBFD550B496 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerStatsScript::SetStartValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_SetStartValue_m7CBFE19E47A94B5B03819787C84C1391C4C42242 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// energy = 0;
		__this->___energy_7 = 0;
		// life = 3;
		__this->___life_8 = 3;
		// playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_4;
		NullCheck(L_0);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_1 = L_0->___sliderLifeScript_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_2 = __this->___playerScript_4;
		NullCheck(L_2);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_3 = L_2->___sliderLifeScript_6;
		NullCheck(L_3);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = L_3->___LifeSlider_4;
		int32_t L_5 = __this->___life_8;
		NullCheck(L_1);
		SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F(L_1, L_4, L_5, NULL);
		// playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_6 = __this->___playerScript_4;
		NullCheck(L_6);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_7 = L_6->___sliderScript_5;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_8 = __this->___playerScript_4;
		NullCheck(L_8);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_9 = L_8->___sliderScript_5;
		NullCheck(L_9);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_10 = L_9->___EnergySlider_4;
		int32_t L_11 = __this->___energy_7;
		NullCheck(L_7);
		SliderScript_SetSliderValue_mB842C13F578B83CD87085098D5B1297A3A2A5F41(L_7, L_10, L_11, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::EnergyAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_EnergyAdd_m44A391E5CBC9204053D250DBC8BDB80FED829CFF (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// playerScript.scoreScript.energyScore += 10;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_4;
		NullCheck(L_0);
		ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* L_1 = L_0->___scoreScript_15;
		ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___energyScore_6;
		NullCheck(L_2);
		L_2->___energyScore_6 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)10)));
		// energy += kocimietkaAdd;
		int32_t L_4 = __this->___energy_7;
		int32_t L_5 = __this->___kocimietkaAdd_9;
		__this->___energy_7 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// if (energy >= maxEnergy)
		int32_t L_6 = __this->___energy_7;
		int32_t L_7 = __this->___maxEnergy_5;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00a5;
		}
	}
	{
		// energy = 0;
		__this->___energy_7 = 0;
		// if (life < maxLife)
		int32_t L_8 = __this->___life_8;
		int32_t L_9 = __this->___maxLife_6;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_00c5;
		}
	}
	{
		// life++;
		int32_t L_10 = __this->___life_8;
		__this->___life_8 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_11 = __this->___playerScript_4;
		NullCheck(L_11);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_12 = L_11->___sliderLifeScript_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_13 = __this->___playerScript_4;
		NullCheck(L_13);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_14 = L_13->___sliderLifeScript_6;
		NullCheck(L_14);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_15 = L_14->___LifeSlider_4;
		int32_t L_16 = __this->___life_8;
		NullCheck(L_12);
		SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F(L_12, L_15, L_16, NULL);
		// playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.lifeSound);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_17 = __this->___playerScript_4;
		NullCheck(L_17);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_18 = L_17->___playerSoundManagerScript_13;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_19 = __this->___playerScript_4;
		NullCheck(L_19);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_20 = L_19->___playerSoundManagerScript_13;
		NullCheck(L_20);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___lifeSound_7;
		NullCheck(L_18);
		PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43(L_18, L_21, NULL);
		goto IL_00c5;
	}

IL_00a5:
	{
		// playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.addSound);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_22 = __this->___playerScript_4;
		NullCheck(L_22);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_23 = L_22->___playerSoundManagerScript_13;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_24 = __this->___playerScript_4;
		NullCheck(L_24);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_25 = L_24->___playerSoundManagerScript_13;
		NullCheck(L_25);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_26 = L_25->___addSound_4;
		NullCheck(L_23);
		PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43(L_23, L_26, NULL);
	}

IL_00c5:
	{
		// playerScript.sliderScript.SetSliderValue(playerScript.sliderScript.EnergySlider, energy);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_27 = __this->___playerScript_4;
		NullCheck(L_27);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_28 = L_27->___sliderScript_5;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_29 = __this->___playerScript_4;
		NullCheck(L_29);
		SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* L_30 = L_29->___sliderScript_5;
		NullCheck(L_30);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_31 = L_30->___EnergySlider_4;
		int32_t L_32 = __this->___energy_7;
		NullCheck(L_28);
		SliderScript_SetSliderValue_mB842C13F578B83CD87085098D5B1297A3A2A5F41(L_28, L_31, L_32, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::MouseAdd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_MouseAdd_m633CAC0290EF65AA0273F8771893DD43525D9F16 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// if(isBoost == false)
		bool L_0 = __this->___isBoost_12;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// StartCoroutine(EnergyBoost());
		RuntimeObject* L_1;
		L_1 = PlayerStatsScript_EnergyBoost_m8CC14DF6C05D280795739940D20CFD618E5A71A7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		return;
	}

IL_0016:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// StartCoroutine(EnergyBoost());
		RuntimeObject* L_3;
		L_3 = PlayerStatsScript_EnergyBoost_m8CC14DF6C05D280795739940D20CFD618E5A71A7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::GetHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_GetHit_m5789F1A7C8C12C92D83C2F78934BD498EEE7215A (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// if (life > 1)
		int32_t L_0 = __this->___life_8;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		// life -= 1;
		int32_t L_1 = __this->___life_8;
		__this->___life_8 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_2 = __this->___playerScript_4;
		NullCheck(L_2);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_3 = L_2->___sliderLifeScript_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_4 = __this->___playerScript_4;
		NullCheck(L_4);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_5 = L_4->___sliderLifeScript_6;
		NullCheck(L_5);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_6 = L_5->___LifeSlider_4;
		int32_t L_7 = __this->___life_8;
		NullCheck(L_3);
		SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F(L_3, L_6, L_7, NULL);
		return;
	}

IL_003e:
	{
		// else if (life == 1)
		int32_t L_8 = __this->___life_8;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// life -= 1;
		int32_t L_9 = __this->___life_8;
		__this->___life_8 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		// playerScript.sliderLifeScript.SetSliderLifeValue(playerScript.sliderLifeScript.LifeSlider, life);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_10 = __this->___playerScript_4;
		NullCheck(L_10);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_11 = L_10->___sliderLifeScript_6;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_12 = __this->___playerScript_4;
		NullCheck(L_12);
		SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* L_13 = L_12->___sliderLifeScript_6;
		NullCheck(L_13);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_14 = L_13->___LifeSlider_4;
		int32_t L_15 = __this->___life_8;
		NullCheck(L_11);
		SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F(L_11, L_14, L_15, NULL);
		// catOutOfLife = true;
		__this->___catOutOfLife_10 = (bool)1;
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.Void PlayerStatsScript::CatStatReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_CatStatReset_m6459AA2C65163C6EEC1C5C46A7ECBB1829D77A29 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// catOutOfLife = false;
		__this->___catOutOfLife_10 = (bool)0;
		// SetMaxSliderValue();
		PlayerStatsScript_SetMaxSliderValue_m6344ECD05EFEE9289E3DEF1500ABACCF8B327DAC(__this, NULL);
		// SetStartValue();
		PlayerStatsScript_SetStartValue_m7CBFE19E47A94B5B03819787C84C1391C4C42242(__this, NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerStatsScript::StopStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_StopStats_mA7BE387FF7D5BDA2AF98D88D73EDCC7C4D8CBCDB (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// pauseStats = true;
		__this->___pauseStats_11 = (bool)1;
		// }
		return;
	}
}
// System.Void PlayerStatsScript::StartStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript_StartStats_m45E35ED5F9AF768F81FF41ECCE79C439FB51030F (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// pauseStats = false;
		__this->___pauseStats_11 = (bool)0;
		// isBoost = false;
		__this->___isBoost_12 = (bool)0;
		// boostSphere.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___boostSphere_14;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// playerScript.playerCollisionScript.isImmune = false;
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_1 = __this->___playerScript_4;
		NullCheck(L_1);
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_2 = L_1->___playerCollisionScript_10;
		NullCheck(L_2);
		L_2->___isImmune_4 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerStatsScript::EnergyBoost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerStatsScript_EnergyBoost_m8CC14DF6C05D280795739940D20CFD618E5A71A7 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* L_0 = (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0*)il2cpp_codegen_object_new(U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnergyBoostU3Ed__24__ctor_m82FC5867985D7D11EAF4FEAE882134D6789DBA86(L_0, 0, NULL);
		U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerStatsScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStatsScript__ctor_m25EE7FB8F4334EC5ADBD6444CBDC10762E717118 (PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* __this, const RuntimeMethod* method) 
{
	{
		// private int maxEnergy = 100;
		__this->___maxEnergy_5 = ((int32_t)100);
		// private int maxLife = 9;
		__this->___maxLife_6 = ((int32_t)9);
		// public int kocimietkaAdd = 20;
		__this->___kocimietkaAdd_9 = ((int32_t)20);
		// private float boostTime = 5f;
		__this->___boostTime_13 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerStatsScript/<EnergyBoost>d__24::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnergyBoostU3Ed__24__ctor_m82FC5867985D7D11EAF4FEAE882134D6789DBA86 (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerStatsScript/<EnergyBoost>d__24::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnergyBoostU3Ed__24_System_IDisposable_Dispose_mADABF4B2F94DBEF10839E906FF789A2CFA2EBB76 (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerStatsScript/<EnergyBoost>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEnergyBoostU3Ed__24_MoveNext_m6989211A8FEB56C0DF5815E61A0D549064F77ABB (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_007f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// playerScript.playerSoundManagerScript.PlaySound(playerScript.playerSoundManagerScript.boostSound);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_4 = V_1;
		NullCheck(L_4);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_5 = L_4->___playerScript_4;
		NullCheck(L_5);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_6 = L_5->___playerSoundManagerScript_13;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_7 = V_1;
		NullCheck(L_7);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_8 = L_7->___playerScript_4;
		NullCheck(L_8);
		PlayerSoundManagerScript_tBBE3DB92723F9CBF141C7146408E96206F3B5FF4* L_9 = L_8->___playerSoundManagerScript_13;
		NullCheck(L_9);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = L_9->___boostSound_6;
		NullCheck(L_6);
		PlayerSoundManagerScript_PlaySound_m263816942EA8F331A7CE0D9655F24CF8D2EC4D43(L_6, L_10, NULL);
		// isBoost = true;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_11 = V_1;
		NullCheck(L_11);
		L_11->___isBoost_12 = (bool)1;
		// boostSphere.SetActive(true);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___boostSphere_14;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// float time = Time.time;
		float L_14;
		L_14 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___U3CtimeU3E5__2_3 = L_14;
		goto IL_0086;
	}

IL_005e:
	{
		// playerScript.playerCollisionScript.isImmune = true;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_15 = V_1;
		NullCheck(L_15);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_16 = L_15->___playerScript_4;
		NullCheck(L_16);
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_17 = L_16->___playerCollisionScript_10;
		NullCheck(L_17);
		L_17->___isImmune_4 = (bool)1;
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007f:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0086:
	{
		// while (Time.time - time < boostTime)
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_19 = __this->___U3CtimeU3E5__2_3;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->___boostTime_13;
		if ((((float)((float)il2cpp_codegen_subtract(L_18, L_19))) < ((float)L_21)))
		{
			goto IL_005e;
		}
	}
	{
		// playerScript.playerCollisionScript.isImmune = false;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_22 = V_1;
		NullCheck(L_22);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_23 = L_22->___playerScript_4;
		NullCheck(L_23);
		PlayerCollisionScript_t8F271CF0D506CDB81CFF316DCA30B93695F6B755* L_24 = L_23->___playerCollisionScript_10;
		NullCheck(L_24);
		L_24->___isImmune_4 = (bool)0;
		// isBoost = false;
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_25 = V_1;
		NullCheck(L_25);
		L_25->___isBoost_12 = (bool)0;
		// boostSphere.SetActive(false);
		PlayerStatsScript_t02D7FA48221B09501C85A0D5E77BFD17B5F225FF* L_26 = V_1;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = L_26->___boostSphere_14;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PlayerStatsScript/<EnergyBoost>d__24::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnergyBoostU3Ed__24_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m84484B0B90A47BE5C8104107265D79B0F398BB1D (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerStatsScript/<EnergyBoost>d__24::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnergyBoostU3Ed__24_System_Collections_IEnumerator_Reset_mADD2AF20D2B94812C09BA9DC4BFC9B187E62A529 (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEnergyBoostU3Ed__24_System_Collections_IEnumerator_Reset_mADD2AF20D2B94812C09BA9DC4BFC9B187E62A529_RuntimeMethod_var)));
	}
}
// System.Object PlayerStatsScript/<EnergyBoost>d__24::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEnergyBoostU3Ed__24_System_Collections_IEnumerator_get_Current_mE2F71DA416518805F37BD630B4647AD4E914D69B (U3CEnergyBoostU3Ed__24_t863A2A82101C9B0BB67A6D48BA4FC3679FEC01A0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SceneManagerScript::add_Pause(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_add_Pause_m389993B414D86F7A75BACD527CAD35136091224B (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_0 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_1 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_2 = NULL;
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_0 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17;
		V_0 = L_0;
	}

IL_0006:
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = V_0;
		V_1 = L_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)CastclassSealed((RuntimeObject*)L_4, PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var));
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_5 = V_2;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_6 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_7;
		L_7 = InterlockedCompareExchangeImpl<PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*>((&((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17), L_5, L_6);
		V_0 = L_7;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_8 = V_0;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_9 = V_1;
		if ((!(((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_8) == ((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SceneManagerScript::remove_Pause(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_remove_Pause_m15AAA65C668421E6E28ABD3A925B2E22D3D2DBEA (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_0 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_1 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_2 = NULL;
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_0 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17;
		V_0 = L_0;
	}

IL_0006:
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = V_0;
		V_1 = L_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)CastclassSealed((RuntimeObject*)L_4, PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var));
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_5 = V_2;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_6 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_7;
		L_7 = InterlockedCompareExchangeImpl<PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*>((&((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17), L_5, L_6);
		V_0 = L_7;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_8 = V_0;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_9 = V_1;
		if ((!(((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_8) == ((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SceneManagerScript::add_Resume(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_add_Resume_m066069A674195FE1619145F87CCFBF193416F80E (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_0 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_1 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_2 = NULL;
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_0 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18;
		V_0 = L_0;
	}

IL_0006:
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = V_0;
		V_1 = L_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)CastclassSealed((RuntimeObject*)L_4, PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var));
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_5 = V_2;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_6 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_7;
		L_7 = InterlockedCompareExchangeImpl<PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*>((&((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18), L_5, L_6);
		V_0 = L_7;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_8 = V_0;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_9 = V_1;
		if ((!(((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_8) == ((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SceneManagerScript::remove_Resume(SceneManagerScript/PauseGame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_remove_Resume_m1E1A22F9FA45E2047D732EB0B96E893A262A9BC1 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_0 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_1 = NULL;
	PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* V_2 = NULL;
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_0 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18;
		V_0 = L_0;
	}

IL_0006:
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = V_0;
		V_1 = L_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)CastclassSealed((RuntimeObject*)L_4, PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42_il2cpp_TypeInfo_var));
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_5 = V_2;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_6 = V_1;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_7;
		L_7 = InterlockedCompareExchangeImpl<PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*>((&((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18), L_5, L_6);
		V_0 = L_7;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_8 = V_0;
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_9 = V_1;
		if ((!(((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_8) == ((RuntimeObject*)(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void SceneManagerScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Awake_m4CBF2B336BE7421947C4B51F0BBE5309E9A3349C (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = FindObjectOfType<PlayerScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A(Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		__this->___playerScript_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Start_mCFA8EF0D416D06365CA87B02111720010142957D (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1163AB6F8E7FD4B2641EBA82C12C85530EF1AB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFCC61F5D4C6086E1ADAB50A4ACE0F2A8ADE9B5);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (SceneManager.GetActiveScene().name == "CharacterScene")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralFDFCC61F5D4C6086E1ADAB50A4ACE0F2A8ADE9B5, NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		// CatBodyMaterial.shader = CatBodyShader;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___CatBodyMaterial_11;
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_4 = __this->___CatBodyShader_12;
		NullCheck(L_3);
		Material_set_shader_mBD3A0D9AB14DE2F7CD5F2775E9AD58E15424C171(L_3, L_4, NULL);
		// PlayerChanges(0, "Fonfel");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 0, _stringLiteralC1163AB6F8E7FD4B2641EBA82C12C85530EF1AB4, NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void SceneManagerScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Update_mF694D4596FA04C12E5D6AB83F6EFC184DCCC057B (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// ExitPauseButton();
		SceneManagerScript_ExitPauseButton_mBAD420B198ADE760CE9F5D2B08A16B2C3E598B55(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::StartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_StartButton_mD5C5D9F34C6B2750B56D702C72AB542995429DD3 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(1, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::HighScoresButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_HighScoresButton_m8138A35A77300187925D74A493578D9F2C1B27E9 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// highScoreScreen.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___highScoreScreen_14;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// highscoreScore.text = GameManagerScript.instance.highscore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___highscoreScore_16;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_3;
		L_3 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_3);
		int32_t* L_4 = (&L_3->___highscore_9);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_5);
		// highscoreName.text = GameManagerScript.instance.highscorePlayerName.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___highscoreName_15;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_7;
		L_7 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		NullCheck(L_7);
		String_t* L_8 = L_7->___highscorePlayerName_6;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_9);
		// }
		return;
	}
}
// System.Void SceneManagerScript::HighScoreHide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_HighScoreHide_m579DF0AA829BE63DDD7F9D45B4DDC7064F7D76F7 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// highScoreScreen.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___highScoreScreen_14;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ExitButton_mE22797152BD59B99E921633891DAD0FF16F00357 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::ResumeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ResumeButton_mD4E37BF736CC46B562FBEB49676DAF4A96D06BF3 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// ResumeStart();
		SceneManagerScript_ResumeStart_mEEC0BA6FF6A710F22AE0BBD1FB7D8BA82F92CCE4(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::MainMenuButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_MainMenuButton_m6F2CD3EA30A761C92ACF0C4720DEFC80FC6A4430 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::GoButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_GoButton_m10CD9C8E01A84587617F03B17F2E1AB49B372BD8 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// manualScreen.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___manualScreen_13;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::ManualScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ManualScreen_m8514342B6A522FAF709F20E1E3A008454FC036B0 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(2);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(2, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color1_m5B7D7FCDA5DBBE8BCBD7781B488BFDBC1753AA98 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1163AB6F8E7FD4B2641EBA82C12C85530EF1AB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(0, "Fonfel");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 0, _stringLiteralC1163AB6F8E7FD4B2641EBA82C12C85530EF1AB4, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color2_m4876DCE5BD7EC1D4973C2D88D997978CB5B43BE4 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C3F2EA347B920EDD07050DEEC273F5573A2FB8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(1, "Fisiek");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 1, _stringLiteral8C3F2EA347B920EDD07050DEEC273F5573A2FB8B, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color3_m886EBB48F420125D0AF4B6F42D6F84DB56B8E9E1 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE18D5A9507F85DCFC8D788FF97E0396926F44129);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(2, "Chester");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 2, _stringLiteralE18D5A9507F85DCFC8D788FF97E0396926F44129, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color4_m7CFD53ACADDB49058283219496249DCDC1F23A51 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral527F40ADFB660F6D96BE1C0625C22A31AAD977C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(3, "Dodi");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 3, _stringLiteral527F40ADFB660F6D96BE1C0625C22A31AAD977C1, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color5_m51CE2B59FD4365DC23D0A90D6A6D1AED673BF631 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAB3F45E7791A4545D9D62646263091C1C9B0D46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(4, "Tzomaraka");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 4, _stringLiteralAAB3F45E7791A4545D9D62646263091C1C9B0D46, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::Color6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_Color6_mEE41A78B25D9CC1D3BDCBC4DD65F7BF92E72070C (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2480FA7D878C110A8A26319FA2D5DAD233739C7D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerChanges(5, "Milka");
		SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27(__this, 5, _stringLiteral2480FA7D878C110A8A26319FA2D5DAD233739C7D, NULL);
		// PLaySoundEffect();
		SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189(__this, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::PlayerChanges(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerChanges_mDEF41C0902C99D4132348A18A1EED15D30915B27 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, int32_t ___numer0, String_t* ___nazwa1, const RuntimeMethod* method) 
{
	{
		// ButtonStateChange(numer);
		int32_t L_0 = ___numer0;
		SceneManagerScript_ButtonStateChange_m76E5DECD8995BA73DE984A93E90423B05E832817(__this, L_0, NULL);
		// PlayerNameText(nazwa);
		String_t* L_1 = ___nazwa1;
		SceneManagerScript_PlayerNameText_mB1FB63D0461029BF668CA2B297A85603E2E27A60(__this, L_1, NULL);
		// PlayerMaterialTexture(playerBodyMaterialTexture[numer]);
		TextureU5BU5D_t0C3F884241E8243E791A31B920CAA89212888E46* L_2 = __this->___playerBodyMaterialTexture_10;
		int32_t L_3 = ___numer0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SceneManagerScript_PlayerMaterialTexture_m7102AB315D6931FD9353F4C07527753B7F62528D(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::ButtonStateChange(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ButtonStateChange_m76E5DECD8995BA73DE984A93E90423B05E832817 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, int32_t ___number0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < colorButtonImage.Length; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		// colorButtonImage[i].sprite = colorButtonSpriteUnactive[i];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_0 = __this->___colorButtonImage_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_4 = __this->___colorButtonSpriteUnactive_8;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_7, NULL);
		// for (int i = 0; i < colorButtonImage.Length; i++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < colorButtonImage.Length; i++)
		int32_t L_9 = V_0;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_10 = __this->___colorButtonImage_6;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// colorButtonImage[number].sprite = colorButtonSpriteActive[number];
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_11 = __this->___colorButtonImage_6;
		int32_t L_12 = ___number0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___colorButtonSpriteActive_7;
		int32_t L_16 = ___number0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::PlayerNameText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerNameText_mB1FB63D0461029BF668CA2B297A85603E2E27A60 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		// playerNameText.text = name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerNameText_9;
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// GameManagerScript.instance.playerName = name;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_2;
		L_2 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		L_2->___playerName_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___playerName_5), (void*)L_3);
		// }
		return;
	}
}
// System.Void SceneManagerScript::PlayerMaterialTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PlayerMaterialTexture_m7102AB315D6931FD9353F4C07527753B7F62528D (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___texture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManagerScript.instance.playerMaterialTexture = texture;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0;
		L_0 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_1 = ___texture0;
		NullCheck(L_0);
		L_0->___playerMaterialTexture_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___playerMaterialTexture_7), (void*)L_1);
		// CatBodyMaterial.SetTexture("_BaseMap", texture);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___CatBodyMaterial_11;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3 = ___texture0;
		NullCheck(L_2);
		Material_SetTexture_m06083C3F52EF02FFB1177901D9907314F280F9A5(L_2, _stringLiteral67BEC592386C17C68CF044FFB14169A1073AC7EB, L_3, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::PLaySoundEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PLaySoundEffect_m4C1D5636693C2E9ABFBDAB8D9A7FE12D8B0D2189 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		// clickSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___clickSound_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneManagerScript::ExitPauseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ExitPauseButton_mBAD420B198ADE760CE9F5D2B08A16B2C3E598B55 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral633C61D544C2C5E3A91845007AE974138EBCF606);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDFCC61F5D4C6086E1ADAB50A4ACE0F2A8ADE9B5);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetKey(KeyCode.Escape) || Input.GetKeyDown("space"))
		bool L_0;
		L_0 = Input_GetKey_m0BF0499CADC378F02B6BEE2399FB945AB929B81A(((int32_t)27), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m4D8FE3CF83D6650C34E66A95175DC37DF2D98916(_stringLiteralE1291C4D47635E327ECFE39842BD1A93F58C61A2, NULL);
		if (!L_1)
		{
			goto IL_0073;
		}
	}

IL_0015:
	{
		// if (SceneManager.GetActiveScene().name == "CharacterScene")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_3, _stringLiteralFDFCC61F5D4C6086E1ADAB50A4ACE0F2A8ADE9B5, NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(0, NULL);
		return;
	}

IL_0035:
	{
		// else if (SceneManager.GetActiveScene().name == "MainMenu")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_5;
		L_5 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		return;
	}

IL_0054:
	{
		// else if (SceneManager.GetActiveScene().name == "GamePlayScene")
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_8;
		L_8 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral633C61D544C2C5E3A91845007AE974138EBCF606, NULL);
		if (!L_10)
		{
			goto IL_0073;
		}
	}
	{
		// PauseStart();
		SceneManagerScript_PauseStart_m558BF7D537F5CB85A7A6390B590AB47701463C7C(__this, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void SceneManagerScript::PauseStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_PauseStart_m558BF7D537F5CB85A7A6390B590AB47701463C7C (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gamePaused == false && playerScript.catHasDied == false && playerScript.countDownScript.countdownActive == false)
		bool L_0 = __this->___gamePaused_20;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_1 = __this->___playerScript_4;
		NullCheck(L_1);
		bool L_2 = L_1->___catHasDied_21;
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_3 = __this->___playerScript_4;
		NullCheck(L_3);
		CountDownScript_tBF001678320C44E17D3E712C32BBD4B3BA26B869* L_4 = L_3->___countDownScript_14;
		NullCheck(L_4);
		bool L_5 = L_4->___countdownActive_7;
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		// gamePaused = true;
		__this->___gamePaused_20 = (bool)1;
		// pauseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___pauseScreen_19;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// if (Pause != null)
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_7 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17;
		if (!L_7)
		{
			goto IL_004b;
		}
	}
	{
		// Pause();
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_8 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Pause_17;
		NullCheck(L_8);
		PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_inline(L_8, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void SceneManagerScript::ResumeStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript_ResumeStart_mEEC0BA6FF6A710F22AE0BBD1FB7D8BA82F92CCE4 (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gamePaused = false;
		__this->___gamePaused_20 = (bool)0;
		// pauseScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseScreen_19;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (Resume != null)
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_1 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// Resume();
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* L_2 = ((SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_StaticFields*)il2cpp_codegen_static_fields_for(SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E_il2cpp_TypeInfo_var))->___Resume_18;
		NullCheck(L_2);
		PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_inline(L_2, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void SceneManagerScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManagerScript__ctor_m4C35A923D9A7F759C33AF42ABC384E7BF8DA3E7A (SceneManagerScript_t99FE0BEA395CD458DF16AD92062B81E0EDFEFA7E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_Multicast(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* currentDelegate = reinterpret_cast<PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_Open(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_OpenStaticInvoker(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_ClosedStaticInvoker(PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void SceneManagerScript/PauseGame::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame__ctor_m53413E0B24D15F8255D24B86D6B073E9727BA032 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_Multicast;
}
// System.Void SceneManagerScript/PauseGame::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SceneManagerScript/PauseGame::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PauseGame_BeginInvoke_mEB09B8FD05323B74CA82622FC8952A77A2A0BDFA (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void SceneManagerScript/PauseGame::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseGame_EndInvoke_mBFBCFF211462135A1F2F2FBBB7DBA6B8E7A856C3 (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreScript_Awake_m864DCEA2965D346121D5F2377570E3E72DCB1BB6 (ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScript = FindObjectOfType<PlayerScript>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A(Object_FindObjectOfType_TisPlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35_mAD141BE19C395F0368EBB8DDCF5C70AF7ADBCA3A_RuntimeMethod_var);
		__this->___playerScript_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerScript_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreScript_Start_m8F0A3691A6EE3A682BE751EB803B28B138FC03A0 (ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScoreScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreScript_Update_m1480843494E984F9EE886D0E4848F1C7B6521B25 (ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(playerScript.catHasDied == false)
		PlayerScript_tE076C73DDA6A5F8E4029DF5D763FB2E5C79B3D35* L_0 = __this->___playerScript_8;
		NullCheck(L_0);
		bool L_1 = L_0->___catHasDied_21;
		if (L_1)
		{
			goto IL_0074;
		}
	}
	{
		// walkScore = (int)(cat.transform.position.z * 0.5) + 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___cat_7;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		__this->___walkScore_5 = ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)L_5), (0.5)))), 2));
		// score = walkScore + energyScore;
		int32_t L_6 = __this->___walkScore_5;
		int32_t L_7 = __this->___energyScore_6;
		__this->___score_4 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		// gameObject.GetComponent<TextMeshProUGUI>().text = score.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_8);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9;
		L_9 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_8, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		int32_t* L_10 = (&__this->___score_4);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_9, L_11);
		// GameManagerScript.instance.finalScore = score;
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_12;
		L_12 = GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline(NULL);
		int32_t L_13 = __this->___score_4;
		NullCheck(L_12);
		L_12->___finalScore_8 = L_13;
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void ScoreScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreScript__ctor_m4965D0732AEA0185BC6DFD75C0CF938CC17FE96F (ScoreScript_t20B177A50EC92CEBAFA2125D1204886ED23F692E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScorpionScript::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_OnEnable_m0B8EA7F95828FC2AE61740CD4A8D7E6B891D1C3E (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied += StopAttacking;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84_RuntimeMethod_var), NULL);
		PlayerScript_add_CatDied_mB29034B3D088665D7D0534CB2264ED5D518FE1A8(L_0, NULL);
		// }
		return;
	}
}
// System.Void ScorpionScript::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_OnDisable_m9D376D9BF0FE7B91B75B1A11678F0297D992C2FC (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerScript.CatDied -= StopAttacking;
		PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* L_0 = (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F*)il2cpp_codegen_object_new(PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PlayerDied__ctor_m3E9B00989C5FF646ACE2F30CC79EBA86167E1283(L_0, __this, (intptr_t)((void*)ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84_RuntimeMethod_var), NULL);
		PlayerScript_remove_CatDied_m3BE6C954654707A0180A163B4D0149D2B552C72F(L_0, NULL);
		// }
		return;
	}
}
// System.Void ScorpionScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_Awake_m114C66CCA57C25F8535E82EF3F7FD9CA81276835 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_5), (void*)L_0);
		// cat = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___cat_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cat_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void ScorpionScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_Start_mC860D7A3E87C6D09903834746EB390F2401B7951 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// isInRange = false;
		__this->___isInRange_7 = (bool)0;
		// isBite = false;
		__this->___isBite_8 = (bool)0;
		// isCatKilled = false;
		__this->___isCatKilled_9 = (bool)0;
		// }
		return;
	}
}
// System.Void ScorpionScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_Update_m46A96F23C67B4DF28D111FC99F413220B6DD0721 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// if(isBite == true)
		bool L_0 = __this->___isBite_8;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Time.time - biteTime > immuneTime)
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_2 = __this->___biteTime_10;
		float L_3 = __this->___immuneTime_11;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_1, L_2))) > ((float)L_3))))
		{
			goto IL_0023;
		}
	}
	{
		// isBite = false;
		__this->___isBite_8 = (bool)0;
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void ScorpionScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_FixedUpdate_mD23FD240DB192D4716E4DD94EFA2323A3EFBA4CA (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// GorundedCheck();
		ScorpionScript_GorundedCheck_m4CEA0947872C61D4719F1058D9B34A8C7EFA8CC7(__this, NULL);
		// if (isCatKilled == false)
		bool L_0 = __this->___isCatKilled_9;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// CatDistance();
		ScorpionScript_CatDistance_m58BF5C3E6476FDF0D4C0735D343447FEB0D57AFC(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void ScorpionScript::CatDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_CatDistance_m58BF5C3E6476FDF0D4C0735D343447FEB0D57AFC (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// distance = Vector3.Distance(cat.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cat_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_4, NULL);
		__this->___distance_6 = L_5;
		// if (distance < 2.5 && isInRange == false && isBite == false && isGrounded == true)
		float L_6 = __this->___distance_6;
		if ((!(((double)((double)L_6)) < ((double)(2.5)))))
		{
			goto IL_0064;
		}
	}
	{
		bool L_7 = __this->___isInRange_7;
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		bool L_8 = __this->___isBite_8;
		if (L_8)
		{
			goto IL_0064;
		}
	}
	{
		bool L_9 = __this->___isGrounded_12;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		// isInRange = true;
		__this->___isInRange_7 = (bool)1;
		// StartCoroutine(ScorpionRun());
		RuntimeObject* L_10;
		L_10 = ScorpionScript_ScorpionRun_m2324CF65C793092454D439E00D0F25909839C351(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ScorpionScript::ScorpionRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorpionScript_ScorpionRun_m2324CF65C793092454D439E00D0F25909839C351 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* L_0 = (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A*)il2cpp_codegen_object_new(U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CScorpionRunU3Ed__17__ctor_m7914F6E2F4CF69762915AF3A6EA20316FEB21922(L_0, 0, NULL);
		U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ScorpionScript::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_OnCollisionEnter_m49985ED3459F9CE6ECF0AFBB4AC37F3146500CC5 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.collider.tag == "Player" && isBite == false)
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		bool L_4 = __this->___isBite_8;
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// biteTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___biteTime_10 = L_5;
		// isBite = true;
		__this->___isBite_8 = (bool)1;
		// isInRange = false;
		__this->___isInRange_7 = (bool)0;
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void ScorpionScript::StopAttacking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_StopAttacking_m77E74BC30E8169E26B3603FC0F94142BE2C21C84 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// isCatKilled = true;
		__this->___isCatKilled_9 = (bool)1;
		// }
		return;
	}
}
// System.Void ScorpionScript::GorundedCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript_GorundedCheck_m4CEA0947872C61D4719F1058D9B34A8C7EFA8CC7 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// if (Physics.Raycast(this.transform.position, Vector3.down, distanceToGround + 0.1f))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		float L_3 = __this->___distanceToGround_13;
		bool L_4;
		L_4 = Physics_Raycast_m5B3761B4176FD520AAB3532612D8716C0ACC57F2(L_1, L_2, ((float)il2cpp_codegen_add(L_3, (0.100000001f))), NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_12 = (bool)1;
		return;
	}

IL_002b:
	{
		// isGrounded = false;
		__this->___isGrounded_12 = (bool)0;
		// }
		return;
	}
}
// System.Void ScorpionScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorpionScript__ctor_m473180409C9C4104BEF8E3ED1C48CD050DB2BB87 (ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* __this, const RuntimeMethod* method) 
{
	{
		// float immuneTime = 2f;
		__this->___immuneTime_11 = (2.0f);
		// private float distanceToGround = 0.95f;
		__this->___distanceToGround_13 = (0.949999988f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScorpionScript/<ScorpionRun>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScorpionRunU3Ed__17__ctor_m7914F6E2F4CF69762915AF3A6EA20316FEB21922 (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ScorpionScript/<ScorpionRun>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScorpionRunU3Ed__17_System_IDisposable_Dispose_m71677C28770E8D9114D8B576F7D5E182A9D0BA9A (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ScorpionScript/<ScorpionRun>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CScorpionRunU3Ed__17_MoveNext_m2F5B5F7082BF750A6A894B1F44C2A2FBB1DF0D8A (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00ac;
	}

IL_0026:
	{
		// rb.AddForce((cat.transform.position - this.transform.position) * 3.5f, ForceMode.Impulse);
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_4 = V_1;
		NullCheck(L_4);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = L_4->___rb_5;
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___cat_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_9, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_13, (3.5f), NULL);
		NullCheck(L_5);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_5, L_14, 1, NULL);
		// rb.rotation = Quaternion.LookRotation(this.transform.position - cat.transform.position);
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_15 = V_1;
		NullCheck(L_15);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_16 = L_15->___rb_5;
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___cat_4;
		NullCheck(L_21);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_19, L_23, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_24, NULL);
		NullCheck(L_16);
		Rigidbody_set_rotation_mF2FC85A4A26AD9FED7DE0061889DF5A408461A5D(L_16, L_25, NULL);
		// yield return new WaitForSecondsRealtime(0.8f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_26 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_26, (0.800000012f), NULL);
		__this->___U3CU3E2__current_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_26);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00ac:
	{
		// while (distance < 3 && isGrounded == true)
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_27 = V_1;
		NullCheck(L_27);
		float L_28 = L_27->___distance_6;
		if ((!(((float)L_28) < ((float)(3.0f)))))
		{
			goto IL_00c4;
		}
	}
	{
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_29 = V_1;
		NullCheck(L_29);
		bool L_30 = L_29->___isGrounded_12;
		if (L_30)
		{
			goto IL_0026;
		}
	}

IL_00c4:
	{
		// isInRange = false;
		ScorpionScript_t1DFCDAA4A30370DDA272B18C2E63BEE3031528F8* L_31 = V_1;
		NullCheck(L_31);
		L_31->___isInRange_7 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object ScorpionScript/<ScorpionRun>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScorpionRunU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7615BCCC28B98440A7FE0EA5BB7B1C6F755D76C7 (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ScorpionScript/<ScorpionRun>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CScorpionRunU3Ed__17_System_Collections_IEnumerator_Reset_m4978CB18F930BCCF4AF25E4C715FC89C02E75A75 (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CScorpionRunU3Ed__17_System_Collections_IEnumerator_Reset_m4978CB18F930BCCF4AF25E4C715FC89C02E75A75_RuntimeMethod_var)));
	}
}
// System.Object ScorpionScript/<ScorpionRun>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CScorpionRunU3Ed__17_System_Collections_IEnumerator_get_Current_mD065D3E802AE227AEBFEF949C513F351A4C14895 (U3CScorpionRunU3Ed__17_t7783D20C48177748B40FB614C86C326666C7556A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SliderLifeScript::SetMaxSliderLifeValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLifeScript_SetMaxSliderLifeValue_m69D70E8661BC8333B931345D1465D807E90E4CE1 (SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___maxValue1, const RuntimeMethod* method) 
{
	{
		// slider.maxValue = maxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		int32_t L_1 = ___maxValue1;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, ((float)L_1), NULL);
		// slider.value = maxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = ___slider0;
		int32_t L_3 = ___maxValue1;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)L_3));
		// }
		return;
	}
}
// System.Void SliderLifeScript::SetSliderLifeValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLifeScript_SetSliderLifeValue_mDD9C7F89573BD96183E83CA54E4A450FD02C046F (SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// slider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		int32_t L_1 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_1));
		// }
		return;
	}
}
// System.Void SliderLifeScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderLifeScript__ctor_mEEDEC0BFCBEC856C61CD23CD75CC773554332036 (SliderLifeScript_tBE8EFE70ADC91207FFC6108C1B496D275102846D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SliderScript::SetMaxSliderValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScript_SetMaxSliderValue_mDFBF47C5C39CC55291205699AD90A0DE63241523 (SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___maxValue1, const RuntimeMethod* method) 
{
	{
		// slider.maxValue = maxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		int32_t L_1 = ___maxValue1;
		NullCheck(L_0);
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_0, ((float)L_1), NULL);
		// slider.value = maxValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = ___slider0;
		int32_t L_3 = ___maxValue1;
		NullCheck(L_2);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)L_3));
		// }
		return;
	}
}
// System.Void SliderScript::SetSliderValue(UnityEngine.UI.Slider,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScript_SetSliderValue_mB842C13F578B83CD87085098D5B1297A3A2A5F41 (SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* __this, Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		// slider.value = value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = ___slider0;
		int32_t L_1 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_1));
		// fill.color = gradient.Evaluate(slider.normalizedValue);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___fill_5;
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_3 = __this->___gradient_6;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = ___slider0;
		NullCheck(L_4);
		float L_5;
		L_5 = Slider_get_normalizedValue_mC839197322275EF1318B6E49B7573FDB30F74D83(L_4, NULL);
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_3, L_5, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_6);
		// }
		return;
	}
}
// System.Void SliderScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderScript__ctor_mA7BB0325EDC9BAFA4A3A918E06DDEC9D54933ECA (SliderScript_t8037E34E46BD1088A6565BDE67464A5F541BCEEE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_mB1CA903ACF933DB0BE2016D105BB2B4702CF1004_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6158066AFB36810D63D98EABF0FABEFFC647B2A0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_m9668B13074D1664DD192669C14B3A8FC01676299_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___from0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___from0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartGame_Invoke_m8E519AD9A43BBF2D9E6525A270AE640871B82C5F_inline (StartGame_t1BE03B251DBD13951E5A3A5652D9CF52F0B6AEC2* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* GameManagerScript_get_instance_m119D7423F2B4A511895404596272F14A8F31AE7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManagerScript instance { get; private set; }
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0 = ((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManagerScript_set_instance_mD6EA9C94D37606DAF078D5C57D33714AFE55F6B3_inline (GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameManagerScript instance { get; private set; }
		GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0* L_0 = ___value0;
		((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_StaticFields*)il2cpp_codegen_static_fields_for(GameManagerScript_tFEC42C3B664C260FC63E2D13CB3155EFBCAEEBC0_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerDied_Invoke_m6280B2B3815A27859308C40739BF933CC4EEEC28_inline (PlayerDied_tAEE3A502062ACC5A55DE3D453D766F12F11CBF8F* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PauseGame_Invoke_m558CFD2CB63B24350F58705C81BE29619130069F_inline (PauseGame_tC3D5AF5E7667C1956BC7EC6352532FA238604D42* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
