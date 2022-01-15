#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Ludiq.ConnectionCollection`3::.ctor()
// 0x00000002 System.Void Ludiq.ConnectionCollectionBase`4::.ctor(TCollection)
// 0x00000003 System.Int32 Ludiq.ConnectionCollectionBase`4::get_Count()
// 0x00000004 System.Boolean Ludiq.ConnectionCollectionBase`4::get_IsReadOnly()
// 0x00000005 System.Collections.Generic.IEnumerator`1<TConnection> Ludiq.ConnectionCollectionBase`4::GetEnumerator()
// 0x00000006 System.Collections.IEnumerator Ludiq.ConnectionCollectionBase`4::System.Collections.IEnumerable.GetEnumerator()
// 0x00000007 System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithSource(TSource)
// 0x00000008 System.Collections.Generic.List`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithSourceNoAlloc(TSource)
// 0x00000009 TConnection Ludiq.ConnectionCollectionBase`4::SingleOrDefaultWithSource(TSource)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithDestination(TDestination)
// 0x0000000B System.Collections.Generic.List`1<TConnection> Ludiq.ConnectionCollectionBase`4::WithDestinationNoAlloc(TDestination)
// 0x0000000C TConnection Ludiq.ConnectionCollectionBase`4::SingleOrDefaultWithDestination(TDestination)
// 0x0000000D System.Void Ludiq.ConnectionCollectionBase`4::Add(TConnection)
// 0x0000000E System.Void Ludiq.ConnectionCollectionBase`4::Clear()
// 0x0000000F System.Boolean Ludiq.ConnectionCollectionBase`4::Contains(TConnection)
// 0x00000010 System.Void Ludiq.ConnectionCollectionBase`4::CopyTo(TConnection[],System.Int32)
// 0x00000011 System.Boolean Ludiq.ConnectionCollectionBase`4::Remove(TConnection)
// 0x00000012 System.Void Ludiq.ConnectionCollectionBase`4::BeforeAdd(TConnection)
// 0x00000013 System.Void Ludiq.ConnectionCollectionBase`4::AfterAdd(TConnection)
// 0x00000014 System.Void Ludiq.ConnectionCollectionBase`4::BeforeRemove(TConnection)
// 0x00000015 System.Void Ludiq.ConnectionCollectionBase`4::AfterRemove(TConnection)
// 0x00000016 System.Void Ludiq.ConnectionCollectionBase`4::AddToDictionaries(TConnection)
// 0x00000017 System.Void Ludiq.ConnectionCollectionBase`4::RemoveFromDictionaries(TConnection)
// 0x00000018 System.Void Ludiq.GraphConnectionCollection`3::.ctor(Ludiq.IGraph)
// 0x00000019 TConnection Ludiq.GraphConnectionCollection`3::Ludiq.IKeyedCollection<System.Guid,TConnection>.get_Item(System.Guid)
// 0x0000001A TConnection Ludiq.GraphConnectionCollection`3::Ludiq.IKeyedCollection<System.Guid,TConnection>.get_Item(System.Int32)
// 0x0000001B System.Boolean Ludiq.GraphConnectionCollection`3::TryGetValue(System.Guid,TConnection&)
// 0x0000001C System.Boolean Ludiq.GraphConnectionCollection`3::Contains(System.Guid)
// 0x0000001D System.Boolean Ludiq.GraphConnectionCollection`3::Remove(System.Guid)
// 0x0000001E System.Void Ludiq.GraphConnectionCollection`3::add_ItemAdded(System.Action`1<TConnection>)
// 0x0000001F System.Void Ludiq.GraphConnectionCollection`3::remove_ItemAdded(System.Action`1<TConnection>)
// 0x00000020 System.Void Ludiq.GraphConnectionCollection`3::add_ItemRemoved(System.Action`1<TConnection>)
// 0x00000021 System.Void Ludiq.GraphConnectionCollection`3::remove_ItemRemoved(System.Action`1<TConnection>)
// 0x00000022 System.Void Ludiq.GraphConnectionCollection`3::add_CollectionChanged(System.Action)
// 0x00000023 System.Void Ludiq.GraphConnectionCollection`3::remove_CollectionChanged(System.Action)
// 0x00000024 System.Void Ludiq.GraphConnectionCollection`3::BeforeAdd(TConnection)
// 0x00000025 System.Void Ludiq.GraphConnectionCollection`3::AfterAdd(TConnection)
// 0x00000026 System.Void Ludiq.GraphConnectionCollection`3::BeforeRemove(TConnection)
// 0x00000027 System.Void Ludiq.GraphConnectionCollection`3::AfterRemove(TConnection)
// 0x00000028 TSource Ludiq.IConnection`2::get_source()
// 0x00000029 TDestination Ludiq.IConnection`2::get_destination()
// 0x0000002A System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.IConnectionCollection`3::WithSource(TSource)
// 0x0000002B System.Collections.Generic.IEnumerable`1<TConnection> Ludiq.IConnectionCollection`3::WithDestination(TDestination)
// 0x0000002C System.Void Ludiq.InvalidConnectionException::.ctor()
extern void InvalidConnectionException__ctor_m86E7E705D6D743EC889B9DC029519356A9959313 (void);
// 0x0000002D System.Void Ludiq.InvalidConnectionException::.ctor(System.String)
extern void InvalidConnectionException__ctor_m79421FA5BA58D7D3BA399956FC9DD9DA47B8BB2A (void);
// 0x0000002E System.Void Ludiq.GraphInstances::Instantiate(Ludiq.GraphReference)
extern void GraphInstances_Instantiate_mBC31DB722EE7E9EC02A45642024A22C0C7695CC7 (void);
// 0x0000002F System.Void Ludiq.GraphInstances::Uninstantiate(Ludiq.GraphReference)
extern void GraphInstances_Uninstantiate_mF863E6AE4EC4FAD8D64BC18F1F1A723EB1C72D50 (void);
// 0x00000030 System.Collections.Generic.HashSet`1<Ludiq.GraphReference> Ludiq.GraphInstances::OfPooled(Ludiq.IGraph)
extern void GraphInstances_OfPooled_m9E532550FEF24E877CD47E48A3884E830FA1CEB4 (void);
// 0x00000031 System.Collections.Generic.HashSet`1<Ludiq.GraphReference> Ludiq.GraphInstances::ChildrenOfPooled(Ludiq.IGraphParent)
extern void GraphInstances_ChildrenOfPooled_m9A07D540940AA5B69093ED48E2C8293687409CC9 (void);
// 0x00000032 System.Void Ludiq.GraphInstances::.cctor()
extern void GraphInstances__cctor_m79D8D1ABDE65010BC00A0430B7F3DA38F9734420 (void);
// 0x00000033 System.Void Ludiq.Graph::.ctor()
extern void Graph__ctor_m6F72F00F374810EB4024E58D29780BD8055CF916 (void);
// 0x00000034 System.String Ludiq.Graph::ToString()
extern void Graph_ToString_mF78E5DC8E7129A5359497307829421DB86D0CC42 (void);
// 0x00000035 Ludiq.IGraphData Ludiq.Graph::CreateData()
// 0x00000036 System.Void Ludiq.Graph::Instantiate(Ludiq.GraphReference)
extern void Graph_Instantiate_mAD543BF2706C3897117259408FD5501A5ABEAA3B (void);
// 0x00000037 System.Void Ludiq.Graph::Uninstantiate(Ludiq.GraphReference)
extern void Graph_Uninstantiate_m1260B45C45E2C967A4DF3402BDB257A0A4D9F7C1 (void);
// 0x00000038 Ludiq.MergedGraphElementCollection Ludiq.Graph::get_elements()
extern void Graph_get_elements_m36E0480F07EB0370BE8DBC5BAB4E7E626562B5F1 (void);
// 0x00000039 System.String Ludiq.Graph::get_title()
extern void Graph_get_title_mA50AF2EE564274FCDD08A5076719D2618B5F461E (void);
// 0x0000003A System.Void Ludiq.Graph::set_title(System.String)
extern void Graph_set_title_m71D601B44A1A12D8BD8690930E8C484FC6D3BB19 (void);
// 0x0000003B System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.Graph::get_deserializationDependencies()
extern void Graph_get_deserializationDependencies_mDA92D8D77F25A6CCE1EBD6EB81771A1B366CB3C2 (void);
// 0x0000003C System.Void Ludiq.Graph::OnBeforeSerialize()
extern void Graph_OnBeforeSerialize_m7D416CA5137AD12973E15DE52CC17E7253FC39FC (void);
// 0x0000003D System.Void Ludiq.Graph::OnAfterDeserialize()
extern void Graph_OnAfterDeserialize_m0BB30DC6E1FA13E79BD28CA88ED6644561E79AFC (void);
// 0x0000003E System.Void Ludiq.Graph::OnAfterDependenciesDeserialized()
extern void Graph_OnAfterDependenciesDeserialized_mC7705F29E805E8C7310B0C3FEA7E8BD1AE0A1861 (void);
// 0x0000003F System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Graph::get_aotStubs()
extern void Graph_get_aotStubs_mA24A6C5D52A82A0979CA421BF782C54A22C63F44 (void);
// 0x00000040 System.Void Ludiq.Graph::Prewarm()
extern void Graph_Prewarm_m9B895DE4859AD5123E5CD3CD06C04080B114C68B (void);
// 0x00000041 System.Void Ludiq.Graph::Dispose()
extern void Graph_Dispose_m099682F7202675BB39DAFDDD1F413A7F4456A8CA (void);
// 0x00000042 System.Void Ludiq.Graph/<>c::.cctor()
extern void U3CU3Ec__cctor_m4C4D54CB9534950C0B32DD17ED6C5E01CAF2E68D (void);
// 0x00000043 System.Void Ludiq.Graph/<>c::.ctor()
extern void U3CU3Ec__ctor_mA26BEA21945EECDE80518D03CC7BBEB8F24A1467 (void);
// 0x00000044 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.Graph/<>c::<get_deserializationDependencies>b__27_0(Ludiq.IGraphElement)
extern void U3CU3Ec_U3Cget_deserializationDependenciesU3Eb__27_0_mD10D29836B1806822144384CDFC1E23FA017BA53 (void);
// 0x00000045 System.Int32 Ludiq.Graph/<>c::<OnAfterDependenciesDeserialized>b__30_0(Ludiq.IGraphElement,Ludiq.IGraphElement)
extern void U3CU3Ec_U3COnAfterDependenciesDeserializedU3Eb__30_0_mBBDCA42BAC854CBA79FB3CCFAAFE980BFE6B588A (void);
// 0x00000046 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Graph/<>c::<get_aotStubs>b__32_0(Ludiq.IGraphElement)
extern void U3CU3Ec_U3Cget_aotStubsU3Eb__32_0_m8BA8FB5E1E2F9F9647E2F0CB328CF014891049E9 (void);
// 0x00000047 System.Void Ludiq.GraphElementCollection`1::.ctor(Ludiq.IGraph)
// 0x00000048 Ludiq.IGraph Ludiq.GraphElementCollection`1::get_graph()
// 0x00000049 System.Void Ludiq.GraphElementCollection`1::add_ItemAdded(System.Action`1<TElement>)
// 0x0000004A System.Void Ludiq.GraphElementCollection`1::remove_ItemAdded(System.Action`1<TElement>)
// 0x0000004B System.Void Ludiq.GraphElementCollection`1::add_ItemRemoved(System.Action`1<TElement>)
// 0x0000004C System.Void Ludiq.GraphElementCollection`1::remove_ItemRemoved(System.Action`1<TElement>)
// 0x0000004D System.Void Ludiq.GraphElementCollection`1::add_CollectionChanged(System.Action)
// 0x0000004E System.Void Ludiq.GraphElementCollection`1::remove_CollectionChanged(System.Action)
// 0x0000004F System.Boolean Ludiq.GraphElementCollection`1::get_ProxyCollectionChange()
// 0x00000050 System.Void Ludiq.GraphElementCollection`1::set_ProxyCollectionChange(System.Boolean)
// 0x00000051 System.Void Ludiq.GraphElementCollection`1::BeforeAdd(TElement)
// 0x00000052 System.Void Ludiq.GraphElementCollection`1::AfterAdd(TElement)
// 0x00000053 System.Void Ludiq.GraphElementCollection`1::BeforeRemove(TElement)
// 0x00000054 System.Void Ludiq.GraphElementCollection`1::AfterRemove(TElement)
// 0x00000055 System.Void Ludiq.GraphElementCollection`1::InsertItem(System.Int32,TElement)
// 0x00000056 System.Void Ludiq.GraphElementCollection`1::RemoveItem(System.Int32)
// 0x00000057 System.Void Ludiq.GraphElementCollection`1::ClearItems()
// 0x00000058 System.Void Ludiq.GraphElementCollection`1::SetItem(System.Int32,TElement)
// 0x00000059 Ludiq.NoAllocEnumerator`1<TElement> Ludiq.GraphElementCollection`1::GetEnumerator()
// 0x0000005A System.Void Ludiq.GraphElementCollection`1/<>c::.cctor()
// 0x0000005B System.Void Ludiq.GraphElementCollection`1/<>c::.ctor()
// 0x0000005C System.Int32 Ludiq.GraphElementCollection`1/<>c::<ClearItems>b__23_0(TElement,TElement)
// 0x0000005D System.Void Ludiq.GraphData`1::.ctor(TGraph)
// 0x0000005E System.Collections.Generic.Dictionary`2<Ludiq.IGraphElementWithData,Ludiq.IGraphElementData> Ludiq.GraphData`1::get_elementsData()
// 0x0000005F System.Collections.Generic.Dictionary`2<Ludiq.IGraphParentElement,Ludiq.IGraphData> Ludiq.GraphData`1::get_childrenGraphsData()
// 0x00000060 System.Collections.Generic.Dictionary`2<System.Guid,Ludiq.IGraphElementData> Ludiq.GraphData`1::get_phantomElementsData()
// 0x00000061 System.Collections.Generic.Dictionary`2<System.Guid,Ludiq.IGraphData> Ludiq.GraphData`1::get_phantomChildrenGraphsData()
// 0x00000062 System.Boolean Ludiq.GraphData`1::TryGetElementData(Ludiq.IGraphElementWithData,Ludiq.IGraphElementData&)
// 0x00000063 System.Boolean Ludiq.GraphData`1::TryGetChildGraphData(Ludiq.IGraphParentElement,Ludiq.IGraphData&)
// 0x00000064 Ludiq.IGraphElementData Ludiq.GraphData`1::CreateElementData(Ludiq.IGraphElementWithData)
// 0x00000065 System.Void Ludiq.GraphData`1::FreeElementData(Ludiq.IGraphElementWithData)
// 0x00000066 Ludiq.IGraphData Ludiq.GraphData`1::CreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000067 System.Void Ludiq.GraphData`1::FreeChildGraphData(Ludiq.IGraphParentElement)
// 0x00000068 Ludiq.IGraphNester Ludiq.GraphNest`2::get_nester()
// 0x00000069 System.Void Ludiq.GraphNest`2::set_nester(Ludiq.IGraphNester)
// 0x0000006A Ludiq.GraphSource Ludiq.GraphNest`2::get_source()
// 0x0000006B System.Void Ludiq.GraphNest`2::set_source(Ludiq.GraphSource)
// 0x0000006C TMacro Ludiq.GraphNest`2::get_macro()
// 0x0000006D System.Void Ludiq.GraphNest`2::set_macro(TMacro)
// 0x0000006E TGraph Ludiq.GraphNest`2::get_embed()
// 0x0000006F System.Void Ludiq.GraphNest`2::set_embed(TGraph)
// 0x00000070 TGraph Ludiq.GraphNest`2::get_graph()
// 0x00000071 Ludiq.IGraph Ludiq.GraphNest`2::Ludiq.IGraphNest.get_graph()
// 0x00000072 System.Void Ludiq.GraphNest`2::add_beforeGraphChange(System.Action)
// 0x00000073 System.Void Ludiq.GraphNest`2::remove_beforeGraphChange(System.Action)
// 0x00000074 System.Void Ludiq.GraphNest`2::add_afterGraphChange(System.Action)
// 0x00000075 System.Void Ludiq.GraphNest`2::remove_afterGraphChange(System.Action)
// 0x00000076 System.Void Ludiq.GraphNest`2::BeforeGraphChange()
// 0x00000077 System.Void Ludiq.GraphNest`2::AfterGraphChange()
// 0x00000078 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.GraphNest`2::get_deserializationDependencies()
// 0x00000079 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.GraphNest`2::get_aotStubs()
// 0x0000007A System.Void Ludiq.GraphNest`2::.ctor()
// 0x0000007B System.Void Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::.ctor(System.Int32)
// 0x0000007C System.Void Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.IDisposable.Dispose()
// 0x0000007D System.Boolean Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::MoveNext()
// 0x0000007E Ludiq.ISerializationDependency Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.Collections.Generic.IEnumerator<Ludiq.ISerializationDependency>.get_Current()
// 0x0000007F System.Void Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.Collections.IEnumerator.Reset()
// 0x00000080 System.Object Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.Collections.IEnumerator.get_Current()
// 0x00000081 System.Collections.Generic.IEnumerator`1<Ludiq.ISerializationDependency> Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.Collections.Generic.IEnumerable<Ludiq.ISerializationDependency>.GetEnumerator()
// 0x00000082 System.Collections.IEnumerator Ludiq.GraphNest`2/<get_deserializationDependencies>d__41::System.Collections.IEnumerable.GetEnumerator()
// 0x00000083 System.Boolean Ludiq.GraphPointer::IsValidRoot(Ludiq.IGraphRoot)
extern void GraphPointer_IsValidRoot_mC93ABE5041BAF865583BC91EFD10264C57A413C2 (void);
// 0x00000084 System.Void Ludiq.GraphPointer::.ctor()
extern void GraphPointer__ctor_mBE645EAFB6D080C0BEFFF95D1106F110B4683F22 (void);
// 0x00000085 System.Void Ludiq.GraphPointer::Initialize(Ludiq.IGraphRoot)
extern void GraphPointer_Initialize_m8921D314537D8ED33874419DEBC037297D41A191 (void);
// 0x00000086 Ludiq.GraphReference Ludiq.GraphPointer::AsReference()
// 0x00000087 System.Void Ludiq.GraphPointer::CopyFrom(Ludiq.GraphPointer)
extern void GraphPointer_CopyFrom_mA5CF477D86FF8762A6F1C7445D9500D2EF72F26E (void);
// 0x00000088 Ludiq.IGraphRoot Ludiq.GraphPointer::get_root()
extern void GraphPointer_get_root_m40374E3DB3AF7F45890867E15B814322172C9444 (void);
// 0x00000089 System.Void Ludiq.GraphPointer::set_root(Ludiq.IGraphRoot)
extern void GraphPointer_set_root_m03A9F9A69A65AC1D3B623CBA5B05B96D9766831F (void);
// 0x0000008A UnityEngine.Object Ludiq.GraphPointer::get_rootObject()
extern void GraphPointer_get_rootObject_m9048A1A97B394B29A87A37E0F6A7EC5DDF8C9F9F (void);
// 0x0000008B Ludiq.IMachine Ludiq.GraphPointer::get_machine()
extern void GraphPointer_get_machine_m2D1A2101988A866B9715B46960FDC404AB198EBC (void);
// 0x0000008C UnityEngine.MonoBehaviour Ludiq.GraphPointer::get_component()
extern void GraphPointer_get_component_m8A3C7AC3773D3FFE1C29B06D5D296DE128CE4CB2 (void);
// 0x0000008D UnityEngine.GameObject Ludiq.GraphPointer::get_gameObject()
extern void GraphPointer_get_gameObject_m16BB23EC0380D57C2019218597394A00FF806F6B (void);
// 0x0000008E System.Void Ludiq.GraphPointer::set_gameObject(UnityEngine.GameObject)
extern void GraphPointer_set_gameObject_mC90622B07FA3767439C4B2A0663A5C63CC246335 (void);
// 0x0000008F UnityEngine.GameObject Ludiq.GraphPointer::get_self()
extern void GraphPointer_get_self_mBF1B91138567D6556FA48A8C1348C56C2EE189CF (void);
// 0x00000090 System.Nullable`1<UnityEngine.SceneManagement.Scene> Ludiq.GraphPointer::get_scene()
extern void GraphPointer_get_scene_m6D404294DDE9F967DC625B77ABDD7526E469D40D (void);
// 0x00000091 UnityEngine.Object Ludiq.GraphPointer::get_serializedObject()
extern void GraphPointer_get_serializedObject_mEC5145BAAECBCB6F93F9FE6257C2F224205A5892 (void);
// 0x00000092 System.Int32 Ludiq.GraphPointer::get_depth()
extern void GraphPointer_get_depth_m5E363E44A84FEE61E58082467745FFE3E7D2529E (void);
// 0x00000093 System.Boolean Ludiq.GraphPointer::get_isRoot()
extern void GraphPointer_get_isRoot_m27738ABD10A4F4FF36E3A6375E42CC62977BF680 (void);
// 0x00000094 System.Boolean Ludiq.GraphPointer::get_isChild()
extern void GraphPointer_get_isChild_m1BAD78156B1C74FCC3FAB5F7F460A21243AA3805 (void);
// 0x00000095 System.Void Ludiq.GraphPointer::EnsureChild()
extern void GraphPointer_EnsureChild_m7C58DA98A951A9446B9755252048F55DFD1DDF2B (void);
// 0x00000096 System.Boolean Ludiq.GraphPointer::IsWithin()
// 0x00000097 System.Void Ludiq.GraphPointer::EnsureWithin()
// 0x00000098 Ludiq.IGraphParent Ludiq.GraphPointer::get_parent()
extern void GraphPointer_get_parent_m06203B974A8A7B2F006191FB3CBE21A983586D3A (void);
// 0x00000099 T Ludiq.GraphPointer::GetParent()
// 0x0000009A Ludiq.IGraphParentElement Ludiq.GraphPointer::get_parentElement()
extern void GraphPointer_get_parentElement_m897D7214308DDC3AE5DA510C0E99A63B9D9785CC (void);
// 0x0000009B Ludiq.IGraph Ludiq.GraphPointer::get_rootGraph()
extern void GraphPointer_get_rootGraph_m85828233DBE442EC6B27B7B1DD50695452E2B07C (void);
// 0x0000009C Ludiq.IGraph Ludiq.GraphPointer::get_graph()
extern void GraphPointer_get_graph_m2D4A325AD6EF768A61123C04DEDEBCBA85058095 (void);
// 0x0000009D Ludiq.IGraphData Ludiq.GraphPointer::get__data()
extern void GraphPointer_get__data_mC51AFD9DC9753B7C4C88EF6D96848E9A14EDF095 (void);
// 0x0000009E System.Void Ludiq.GraphPointer::set__data(Ludiq.IGraphData)
extern void GraphPointer_set__data_m707433FE323FE44A07D09C7C6AD546DC0A1E2570 (void);
// 0x0000009F Ludiq.IGraphData Ludiq.GraphPointer::get_data()
extern void GraphPointer_get_data_mF21CAE107B8D3A53A185B6EE74AD9A795A1D309E (void);
// 0x000000A0 Ludiq.IGraphData Ludiq.GraphPointer::get__parentData()
extern void GraphPointer_get__parentData_mC0AF571372FE03CE7A79DAC155A584D4CBDECA3B (void);
// 0x000000A1 System.Boolean Ludiq.GraphPointer::get_hasData()
extern void GraphPointer_get_hasData_m8E0041F4117C4F8E4378CCF32536F95A8A1DB0A2 (void);
// 0x000000A2 System.Void Ludiq.GraphPointer::EnsureDataAvailable()
extern void GraphPointer_EnsureDataAvailable_mD8D7E820DF671815775EB5BE7BDFDAA387C7A3E2 (void);
// 0x000000A3 T Ludiq.GraphPointer::GetGraphData()
// 0x000000A4 T Ludiq.GraphPointer::GetElementData(Ludiq.IGraphElementWithData)
// 0x000000A5 System.Func`2<Ludiq.IGraphRoot,Ludiq.IGraphDebugData> Ludiq.GraphPointer::get_fetchRootDebugDataBinding()
extern void GraphPointer_get_fetchRootDebugDataBinding_mE2FA7BCEEAB1535D4DB9D902C539579B62068B9F (void);
// 0x000000A6 System.Boolean Ludiq.GraphPointer::get_hasDebugData()
extern void GraphPointer_get_hasDebugData_m8521576EA33D10CA3B3AD9F57AB40FB4E75382B3 (void);
// 0x000000A7 System.Void Ludiq.GraphPointer::EnsureDebugDataAvailable()
extern void GraphPointer_EnsureDebugDataAvailable_m7416491AA8942416BF77E14AF035F256CD1BA44A (void);
// 0x000000A8 Ludiq.IGraphDebugData Ludiq.GraphPointer::get__debugData()
extern void GraphPointer_get__debugData_mEE1763D2DE7BC4509D10CB28FCDCE8780E6B32C6 (void);
// 0x000000A9 Ludiq.IGraphDebugData Ludiq.GraphPointer::get_debugData()
extern void GraphPointer_get_debugData_m269442643B7F3B6939D098EFBFEC9E80E55DD643 (void);
// 0x000000AA T Ludiq.GraphPointer::GetElementDebugData(Ludiq.IGraphElementWithDebugData)
// 0x000000AB System.Boolean Ludiq.GraphPointer::TryEnterParentElement(Ludiq.IGraphParentElement,System.String&,System.Nullable`1<System.Int32>,System.Boolean)
extern void GraphPointer_TryEnterParentElement_mB9102F88BF8CF1211FB1C876EBAE522EC7975DE5 (void);
// 0x000000AC System.Void Ludiq.GraphPointer::EnterParentElement(Ludiq.IGraphParentElement)
extern void GraphPointer_EnterParentElement_m899D7365050FF67FBE389115830150225C3791EF (void);
// 0x000000AD System.Void Ludiq.GraphPointer::EnterValidParentElement(Ludiq.IGraphParentElement)
extern void GraphPointer_EnterValidParentElement_m95711CA9513D3BBA33454A7CB2C8CE3274904D0D (void);
// 0x000000AE System.Void Ludiq.GraphPointer::ExitParentElement()
extern void GraphPointer_ExitParentElement_mCCF0824180D1720A08A302F1781456C623C24992 (void);
// 0x000000AF System.Boolean Ludiq.GraphPointer::get_isValid()
extern void GraphPointer_get_isValid_m28C866D8CF770BA4EE77118B4D01E64E5B86F959 (void);
// 0x000000B0 System.Boolean Ludiq.GraphPointer::InstanceEquals(Ludiq.GraphPointer)
extern void GraphPointer_InstanceEquals_mDB62F6F44AC7AEA9F5BE4BB6B488A5116939BF4B (void);
// 0x000000B1 System.Boolean Ludiq.GraphPointer::DefinitionEquals(Ludiq.GraphPointer)
extern void GraphPointer_DefinitionEquals_m03AD763EB66388E13BE5C317D4419218AB88C972 (void);
// 0x000000B2 System.Int32 Ludiq.GraphPointer::ComputeHashCode()
extern void GraphPointer_ComputeHashCode_mC84F82AFBA1D574D3C356D60A20ECB528ED78C50 (void);
// 0x000000B3 System.String Ludiq.GraphPointer::ToString()
extern void GraphPointer_ToString_mE7E47F38B5EEF37509BEBD398A20E1B7C2EFE5D5 (void);
// 0x000000B4 System.Void Ludiq.GraphPointerException::.ctor(System.String,Ludiq.GraphPointer)
extern void GraphPointerException__ctor_m37F8D13D2B113E5CC45C709336EA0CAB9403EFAA (void);
// 0x000000B5 System.Void Ludiq.GraphReference::.cctor()
extern void GraphReference__cctor_mBB5B5863E5B9061C31FFCA2457170D5566911F20 (void);
// 0x000000B6 System.Void Ludiq.GraphReference::.ctor()
extern void GraphReference__ctor_m7B0A9609AEA822AC5553A495668015231EB1815F (void);
// 0x000000B7 Ludiq.GraphReference Ludiq.GraphReference::New(Ludiq.IGraphRoot,System.Boolean)
extern void GraphReference_New_m363C164C76769BA165271BA65F0FDFFB22F76028 (void);
// 0x000000B8 Ludiq.GraphReference Ludiq.GraphReference::New(Ludiq.GraphPointer)
extern void GraphReference_New_mCCFF5292E29EA189A1DEA8CAEB3DC6ED91A499F3 (void);
// 0x000000B9 System.Void Ludiq.GraphReference::CopyFrom(Ludiq.GraphPointer)
extern void GraphReference_CopyFrom_m4793E06BCB813508B947559D28C33DD2DDE2A902 (void);
// 0x000000BA Ludiq.GraphReference Ludiq.GraphReference::Clone()
extern void GraphReference_Clone_mA03B58B33DB6E99AF4DD06EADA2ED69E55DD0A5E (void);
// 0x000000BB Ludiq.GraphReference Ludiq.GraphReference::AsReference()
extern void GraphReference_AsReference_m7DDF419206F124F2261FEC7F432B5F1D51A94C39 (void);
// 0x000000BC Ludiq.GraphStack Ludiq.GraphReference::ToStackPooled()
extern void GraphReference_ToStackPooled_mCB12E7C5804F8F255319FF59B6087F3E521774BF (void);
// 0x000000BD System.Void Ludiq.GraphReference::CreateGraphData()
extern void GraphReference_CreateGraphData_mFC4F0B96DEC64670A612A9A31120FB9523791EBB (void);
// 0x000000BE System.Void Ludiq.GraphReference::FreeGraphData()
extern void GraphReference_FreeGraphData_m230C340B862DBDD581549D8542B51DFCBACBA952 (void);
// 0x000000BF System.Boolean Ludiq.GraphReference::Equals(System.Object)
extern void GraphReference_Equals_m8B881E12393ECF87F0D6285AECA821C31A9B02B9 (void);
// 0x000000C0 System.Void Ludiq.GraphReference::Hash()
extern void GraphReference_Hash_m4007CED7CB4F9BC51586FF4E92DA8B95A4F39999 (void);
// 0x000000C1 System.Int32 Ludiq.GraphReference::GetHashCode()
extern void GraphReference_GetHashCode_m2494A38938B20A097A4ACABD1DFD8258E18115F6 (void);
// 0x000000C2 System.Boolean Ludiq.GraphReference::op_Equality(Ludiq.GraphReference,Ludiq.GraphReference)
extern void GraphReference_op_Equality_mB3F4CCB7F3C994AC23F0C48E9733A5A735973D8B (void);
// 0x000000C3 System.Boolean Ludiq.GraphReference::op_Inequality(Ludiq.GraphReference,Ludiq.GraphReference)
extern void GraphReference_op_Inequality_mD2003CF8F49E93D9541DE3BD4CA5895CF3A26C82 (void);
// 0x000000C4 Ludiq.GraphReference Ludiq.GraphReference::ParentReference(System.Boolean)
extern void GraphReference_ParentReference_mECDED57DD7852AC6B8A67AA3881541E9CF098B4B (void);
// 0x000000C5 Ludiq.GraphReference Ludiq.GraphReference::ChildReference(Ludiq.IGraphParentElement,System.Boolean,System.Nullable`1<System.Int32>)
extern void GraphReference_ChildReference_m46DE9F688B8D2B2559F41D18E0FFA43A14B5648F (void);
// 0x000000C6 Ludiq.GraphReference Ludiq.GraphReference::Intern(Ludiq.GraphPointer)
extern void GraphReference_Intern_m0BF979D12673ED0C6D9DF8B9C8F780061B57391B (void);
// 0x000000C7 System.Void Ludiq.GraphReference::FreeInvalidInterns()
extern void GraphReference_FreeInvalidInterns_m68A28B4E9E9A29D1AACB8B1BA959792F425AF58C (void);
// 0x000000C8 System.Void Ludiq.GraphsExceptionUtility::SetException(Ludiq.IGraphElementWithDebugData,Ludiq.GraphPointer,System.Exception)
extern void GraphsExceptionUtility_SetException_m9CB1CF4FB71BA3BC7C9368030B41DA458DA09DB8 (void);
// 0x000000C9 System.Void Ludiq.GraphsExceptionUtility::HandleException(Ludiq.IGraphElementWithDebugData,Ludiq.GraphPointer,System.Exception)
extern void GraphsExceptionUtility_HandleException_m32C1DF2B8237539BC17957FE5620367FB4ADC77D (void);
// 0x000000CA System.Boolean Ludiq.GraphsExceptionUtility::HandledIn(System.Exception,Ludiq.GraphReference)
extern void GraphsExceptionUtility_HandledIn_m5D68F8D100695113F5F14E61C80E357C7F3BE0A7 (void);
// 0x000000CB System.Void Ludiq.GraphStack::.ctor()
extern void GraphStack__ctor_m0FE15FA50C3B976F6F252D95CA240CB8786E2F4B (void);
// 0x000000CC Ludiq.GraphStack Ludiq.GraphStack::New(Ludiq.GraphPointer)
extern void GraphStack_New_m14E2E604A2DC60AB7BCF2779FE499A2C1C5E6935 (void);
// 0x000000CD Ludiq.GraphStack Ludiq.GraphStack::Clone()
extern void GraphStack_Clone_m7031B78685BE832C2FEAA7ED73775ED7D7FEF4E7 (void);
// 0x000000CE System.Void Ludiq.GraphStack::Dispose()
extern void GraphStack_Dispose_m387A82E8F15F6B68AECE1B005B5066AF6B288699 (void);
// 0x000000CF System.Void Ludiq.GraphStack::Ludiq.IPoolable.New()
extern void GraphStack_Ludiq_IPoolable_New_m4284743F88E594CC758A56A5CB0190AE7A14927A (void);
// 0x000000D0 System.Void Ludiq.GraphStack::Ludiq.IPoolable.Free()
extern void GraphStack_Ludiq_IPoolable_Free_mFC53D426C1F87C3F555F1A4F17C2D8C498E2051E (void);
// 0x000000D1 Ludiq.GraphReference Ludiq.GraphStack::AsReference()
extern void GraphStack_AsReference_mEFA2922E3D66C097C74EDC5A0A6926F04BF31BE2 (void);
// 0x000000D2 Ludiq.GraphReference Ludiq.GraphStack::ToReference()
extern void GraphStack_ToReference_m333FE476C1A25077ACDEDCFBFE828900A862CB96 (void);
// 0x000000D3 System.Void Ludiq.GraphStack::EnterParentElement(Ludiq.IGraphParentElement)
extern void GraphStack_EnterParentElement_m5625A249B305C65CDAB608E7BAC6B01F2D2C991D (void);
// 0x000000D4 System.Boolean Ludiq.GraphStack::TryEnterParentElement(Ludiq.IGraphParentElement)
extern void GraphStack_TryEnterParentElement_m47671755C5D9240FC5F696895D2AB9202115B6C8 (void);
// 0x000000D5 System.Boolean Ludiq.GraphStack::TryEnterParentElementUnsafe(Ludiq.IGraphParentElement)
extern void GraphStack_TryEnterParentElementUnsafe_m80774FD678E7FF552DF0845958FA7A24BE48559B (void);
// 0x000000D6 System.Void Ludiq.GraphStack::ExitParentElement()
extern void GraphStack_ExitParentElement_mDF4C5C99BF313BA43ADD934CFACCE74B20C5D7D2 (void);
// 0x000000D7 System.Void Ludiq.GraphStack/<>c::.cctor()
extern void U3CU3Ec__cctor_mF097C81FCC2819BF8636D46595D91617C84EC2C7 (void);
// 0x000000D8 System.Void Ludiq.GraphStack/<>c::.ctor()
extern void U3CU3Ec__ctor_m196892E2D2EC7F05DC646ED58486298F6030FD6E (void);
// 0x000000D9 Ludiq.GraphStack Ludiq.GraphStack/<>c::<New>b__3_0()
extern void U3CU3Ec_U3CNewU3Eb__3_0_m67FC5762AC9B49F84BEA03C83EA3E1D53D917372 (void);
// 0x000000DA Ludiq.MergedGraphElementCollection Ludiq.IGraph::get_elements()
// 0x000000DB Ludiq.IGraphData Ludiq.IGraph::CreateData()
// 0x000000DC System.Void Ludiq.IGraph::Instantiate(Ludiq.GraphReference)
// 0x000000DD System.Void Ludiq.IGraph::Uninstantiate(Ludiq.GraphReference)
// 0x000000DE Ludiq.IGraph Ludiq.IGraphElement::get_graph()
// 0x000000DF System.Void Ludiq.IGraphElement::set_graph(Ludiq.IGraph)
// 0x000000E0 System.Boolean Ludiq.IGraphElement::HandleDependencies()
// 0x000000E1 System.Int32 Ludiq.IGraphElement::get_dependencyOrder()
// 0x000000E2 System.Guid Ludiq.IGraphElement::get_guid()
// 0x000000E3 System.Void Ludiq.IGraphElement::Instantiate(Ludiq.GraphReference)
// 0x000000E4 System.Void Ludiq.IGraphElement::Uninstantiate(Ludiq.GraphReference)
// 0x000000E5 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.IGraphElement::get_deserializationDependencies()
// 0x000000E6 System.Guid Ludiq.GraphElement`1::get_guid()
// 0x000000E7 System.Void Ludiq.GraphElement`1::Instantiate(Ludiq.GraphReference)
// 0x000000E8 System.Void Ludiq.GraphElement`1::Uninstantiate(Ludiq.GraphReference)
// 0x000000E9 System.Void Ludiq.GraphElement`1::BeforeAdd()
// 0x000000EA System.Void Ludiq.GraphElement`1::AfterAdd()
// 0x000000EB System.Void Ludiq.GraphElement`1::BeforeRemove()
// 0x000000EC System.Void Ludiq.GraphElement`1::AfterRemove()
// 0x000000ED System.Void Ludiq.GraphElement`1::Dispose()
// 0x000000EE System.Void Ludiq.GraphElement`1::InstantiateNest()
// 0x000000EF System.Void Ludiq.GraphElement`1::UninstantiateNest()
// 0x000000F0 System.Int32 Ludiq.GraphElement`1::get_dependencyOrder()
// 0x000000F1 System.Boolean Ludiq.GraphElement`1::HandleDependencies()
// 0x000000F2 TGraph Ludiq.GraphElement`1::get_graph()
// 0x000000F3 System.Void Ludiq.GraphElement`1::set_graph(TGraph)
// 0x000000F4 Ludiq.IGraph Ludiq.GraphElement`1::Ludiq.IGraphElement.get_graph()
// 0x000000F5 System.Void Ludiq.GraphElement`1::Ludiq.IGraphElement.set_graph(Ludiq.IGraph)
// 0x000000F6 Ludiq.IGraph Ludiq.GraphElement`1::Ludiq.IGraphItem.get_graph()
// 0x000000F7 System.Collections.Generic.IEnumerable`1<Ludiq.ISerializationDependency> Ludiq.GraphElement`1::get_deserializationDependencies()
// 0x000000F8 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.GraphElement`1::get_aotStubs()
// 0x000000F9 System.Void Ludiq.GraphElement`1::Prewarm()
// 0x000000FA System.Void Ludiq.GraphElement`1::CopyFrom(Ludiq.GraphElement`1<TGraph>)
// 0x000000FB System.String Ludiq.GraphElement`1::ToString()
// 0x000000FC System.Void Ludiq.GraphElement`1::.ctor()
// 0x000000FD Ludiq.IGraph Ludiq.IGraphItem::get_graph()
// 0x000000FE System.Boolean Ludiq.IGraphData::TryGetElementData(Ludiq.IGraphElementWithData,Ludiq.IGraphElementData&)
// 0x000000FF System.Boolean Ludiq.IGraphData::TryGetChildGraphData(Ludiq.IGraphParentElement,Ludiq.IGraphData&)
// 0x00000100 Ludiq.IGraphElementData Ludiq.IGraphData::CreateElementData(Ludiq.IGraphElementWithData)
// 0x00000101 System.Void Ludiq.IGraphData::FreeElementData(Ludiq.IGraphElementWithData)
// 0x00000102 Ludiq.IGraphData Ludiq.IGraphData::CreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000103 System.Void Ludiq.IGraphData::FreeChildGraphData(Ludiq.IGraphParentElement)
// 0x00000104 Ludiq.IGraphElementDebugData Ludiq.IGraphDebugData::GetOrCreateElementData(Ludiq.IGraphElementWithDebugData)
// 0x00000105 Ludiq.IGraphDebugData Ludiq.IGraphDebugData::GetOrCreateChildGraphData(Ludiq.IGraphParentElement)
// 0x00000106 Ludiq.IGraphElementData Ludiq.IGraphElementWithData::CreateData()
// 0x00000107 System.Void Ludiq.IGraphElementDebugData::set_runtimeException(System.Exception)
// 0x00000108 Ludiq.IGraph Ludiq.IGraphNest::get_graph()
// 0x00000109 Ludiq.IGraphNest Ludiq.IGraphNester::get_nest()
// 0x0000010A System.Void Ludiq.IGraphNester::InstantiateNest()
// 0x0000010B System.Void Ludiq.IGraphNester::UninstantiateNest()
// 0x0000010C Ludiq.IGraph Ludiq.IGraphParent::get_childGraph()
// 0x0000010D System.Boolean Ludiq.IGraphParent::get_isSerializationRoot()
// 0x0000010E UnityEngine.Object Ludiq.IGraphParent::get_serializedObject()
// 0x0000010F Ludiq.IGraph Ludiq.IGraphParent::DefaultGraph()
// 0x00000110 Ludiq.IGraphData Ludiq.IMachine::get_graphData()
// 0x00000111 System.Void Ludiq.IMachine::set_graphData(Ludiq.IGraphData)
// 0x00000112 UnityEngine.GameObject Ludiq.IMachine::get_threadSafeGameObject()
// 0x00000113 System.Void Ludiq.Machine`2::.ctor()
// 0x00000114 Ludiq.GraphNest`2<TGraph,TMacro> Ludiq.Machine`2::get_nest()
// 0x00000115 System.Void Ludiq.Machine`2::set_nest(Ludiq.GraphNest`2<TGraph,TMacro>)
// 0x00000116 Ludiq.IGraphNest Ludiq.Machine`2::Ludiq.IGraphNester.get_nest()
// 0x00000117 UnityEngine.GameObject Ludiq.Machine`2::Ludiq.IMachine.get_threadSafeGameObject()
// 0x00000118 Ludiq.GraphReference Ludiq.Machine`2::get_reference()
// 0x00000119 System.Boolean Ludiq.Machine`2::get_hasGraph()
// 0x0000011A TGraph Ludiq.Machine`2::get_graph()
// 0x0000011B Ludiq.IGraphData Ludiq.Machine`2::get_graphData()
// 0x0000011C System.Void Ludiq.Machine`2::set_graphData(Ludiq.IGraphData)
// 0x0000011D System.Boolean Ludiq.Machine`2::Ludiq.IGraphParent.get_isSerializationRoot()
// 0x0000011E UnityEngine.Object Ludiq.Machine`2::Ludiq.IGraphParent.get_serializedObject()
// 0x0000011F Ludiq.IGraph Ludiq.Machine`2::Ludiq.IGraphParent.get_childGraph()
// 0x00000120 System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Machine`2::Ludiq.IAotStubbable.get_aotStubs()
// 0x00000121 System.Boolean Ludiq.Machine`2::get_isDescriptionValid()
// 0x00000122 System.Void Ludiq.Machine`2::set_isDescriptionValid(System.Boolean)
// 0x00000123 System.Void Ludiq.Machine`2::Awake()
// 0x00000124 System.Void Ludiq.Machine`2::OnEnable()
// 0x00000125 System.Void Ludiq.Machine`2::OnInstantiateWhileEnabled()
// 0x00000126 System.Void Ludiq.Machine`2::OnUninstantiateWhileEnabled()
// 0x00000127 System.Void Ludiq.Machine`2::OnDisable()
// 0x00000128 System.Void Ludiq.Machine`2::OnDestroy()
// 0x00000129 System.Void Ludiq.Machine`2::OnValidate()
// 0x0000012A Ludiq.GraphPointer Ludiq.Machine`2::GetReference()
// 0x0000012B System.Void Ludiq.Machine`2::CacheReference()
// 0x0000012C System.Void Ludiq.Machine`2::ClearCachedReference()
// 0x0000012D System.Void Ludiq.Machine`2::InstantiateNest()
// 0x0000012E System.Void Ludiq.Machine`2::UninstantiateNest()
// 0x0000012F System.Void Ludiq.Machine`2::TriggerAnimationEvent(UnityEngine.AnimationEvent)
// 0x00000130 System.Void Ludiq.Machine`2::TriggerUnityEvent(System.String)
// 0x00000131 TGraph Ludiq.Machine`2::DefaultGraph()
// 0x00000132 Ludiq.IGraph Ludiq.Machine`2::Ludiq.IGraphParent.DefaultGraph()
// 0x00000133 Ludiq.IGraph Ludiq.IMacro::get_graph()
// 0x00000134 System.Void Ludiq.IMacro::set_graph(Ludiq.IGraph)
// 0x00000135 TGraph Ludiq.Macro`1::get_graph()
// 0x00000136 System.Void Ludiq.Macro`1::set_graph(TGraph)
// 0x00000137 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IMacro.get_graph()
// 0x00000138 System.Void Ludiq.Macro`1::Ludiq.IMacro.set_graph(Ludiq.IGraph)
// 0x00000139 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IGraphParent.get_childGraph()
// 0x0000013A System.Collections.Generic.IEnumerable`1<System.Object> Ludiq.Macro`1::get_aotStubs()
// 0x0000013B System.Boolean Ludiq.Macro`1::Ludiq.IGraphParent.get_isSerializationRoot()
// 0x0000013C UnityEngine.Object Ludiq.Macro`1::Ludiq.IGraphParent.get_serializedObject()
// 0x0000013D Ludiq.GraphReference Ludiq.Macro`1::get_reference()
// 0x0000013E System.Boolean Ludiq.Macro`1::get_isDescriptionValid()
// 0x0000013F System.Void Ludiq.Macro`1::set_isDescriptionValid(System.Boolean)
// 0x00000140 System.Void Ludiq.Macro`1::OnBeforeDeserialize()
// 0x00000141 System.Void Ludiq.Macro`1::OnAfterDeserialize()
// 0x00000142 TGraph Ludiq.Macro`1::DefaultGraph()
// 0x00000143 Ludiq.IGraph Ludiq.Macro`1::Ludiq.IGraphParent.DefaultGraph()
// 0x00000144 System.Void Ludiq.Macro`1::OnEnable()
// 0x00000145 System.Void Ludiq.Macro`1::OnDisable()
// 0x00000146 Ludiq.GraphPointer Ludiq.Macro`1::GetReference()
// 0x00000147 System.Void Ludiq.Macro`1::.ctor()
// 0x00000148 System.Void Ludiq.GraphGroup::.cctor()
extern void GraphGroup__cctor_m105DFF01D1CACC4DC8B3A1D83C2299B64EB55C99 (void);
// 0x00000149 System.Void Ludiq.MergedGraphElementCollection::add_ItemAdded(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_add_ItemAdded_m2112CD74EE642C4448942408A38592C166A82F34 (void);
// 0x0000014A System.Void Ludiq.MergedGraphElementCollection::remove_ItemAdded(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_remove_ItemAdded_m7235176C4C247BCA062CF7478E7B57AA7B8123D3 (void);
// 0x0000014B System.Void Ludiq.MergedGraphElementCollection::add_ItemRemoved(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_add_ItemRemoved_m6A2D1A56123A01A85D134458048BA396F5318851 (void);
// 0x0000014C System.Void Ludiq.MergedGraphElementCollection::remove_ItemRemoved(System.Action`1<Ludiq.IGraphElement>)
extern void MergedGraphElementCollection_remove_ItemRemoved_m29B23A07D536B641D5E3F682790C8BCFA03A28EC (void);
// 0x0000014D System.Void Ludiq.MergedGraphElementCollection::add_CollectionChanged(System.Action)
extern void MergedGraphElementCollection_add_CollectionChanged_mBB5B991F953A14FBD6C0332052B6AEC67B0406B9 (void);
// 0x0000014E System.Void Ludiq.MergedGraphElementCollection::remove_CollectionChanged(System.Action)
extern void MergedGraphElementCollection_remove_CollectionChanged_m6EDBE97AC9F03C67AE472BBE106AF742DC479754 (void);
// 0x0000014F System.Void Ludiq.MergedGraphElementCollection::Include(Ludiq.IKeyedCollection`2<System.Guid,TSubItem>)
// 0x00000150 System.Void Ludiq.MergedGraphElementCollection::.ctor()
extern void MergedGraphElementCollection__ctor_m37B54B8BE1E6412B02DB453D2DF347F81BE0E9F5 (void);
// 0x00000151 System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_0(TSubItem)
// 0x00000152 System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_1(TSubItem)
// 0x00000153 System.Void Ludiq.MergedGraphElementCollection::<Include>b__9_2()
static Il2CppMethodPointer s_methodPointers[339] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	InvalidConnectionException__ctor_m86E7E705D6D743EC889B9DC029519356A9959313,
	InvalidConnectionException__ctor_m79421FA5BA58D7D3BA399956FC9DD9DA47B8BB2A,
	GraphInstances_Instantiate_mBC31DB722EE7E9EC02A45642024A22C0C7695CC7,
	GraphInstances_Uninstantiate_mF863E6AE4EC4FAD8D64BC18F1F1A723EB1C72D50,
	GraphInstances_OfPooled_m9E532550FEF24E877CD47E48A3884E830FA1CEB4,
	GraphInstances_ChildrenOfPooled_m9A07D540940AA5B69093ED48E2C8293687409CC9,
	GraphInstances__cctor_m79D8D1ABDE65010BC00A0430B7F3DA38F9734420,
	Graph__ctor_m6F72F00F374810EB4024E58D29780BD8055CF916,
	Graph_ToString_mF78E5DC8E7129A5359497307829421DB86D0CC42,
	NULL,
	Graph_Instantiate_mAD543BF2706C3897117259408FD5501A5ABEAA3B,
	Graph_Uninstantiate_m1260B45C45E2C967A4DF3402BDB257A0A4D9F7C1,
	Graph_get_elements_m36E0480F07EB0370BE8DBC5BAB4E7E626562B5F1,
	Graph_get_title_mA50AF2EE564274FCDD08A5076719D2618B5F461E,
	Graph_set_title_m71D601B44A1A12D8BD8690930E8C484FC6D3BB19,
	Graph_get_deserializationDependencies_mDA92D8D77F25A6CCE1EBD6EB81771A1B366CB3C2,
	Graph_OnBeforeSerialize_m7D416CA5137AD12973E15DE52CC17E7253FC39FC,
	Graph_OnAfterDeserialize_m0BB30DC6E1FA13E79BD28CA88ED6644561E79AFC,
	Graph_OnAfterDependenciesDeserialized_mC7705F29E805E8C7310B0C3FEA7E8BD1AE0A1861,
	Graph_get_aotStubs_mA24A6C5D52A82A0979CA421BF782C54A22C63F44,
	Graph_Prewarm_m9B895DE4859AD5123E5CD3CD06C04080B114C68B,
	Graph_Dispose_m099682F7202675BB39DAFDDD1F413A7F4456A8CA,
	U3CU3Ec__cctor_m4C4D54CB9534950C0B32DD17ED6C5E01CAF2E68D,
	U3CU3Ec__ctor_mA26BEA21945EECDE80518D03CC7BBEB8F24A1467,
	U3CU3Ec_U3Cget_deserializationDependenciesU3Eb__27_0_mD10D29836B1806822144384CDFC1E23FA017BA53,
	U3CU3Ec_U3COnAfterDependenciesDeserializedU3Eb__30_0_mBBDCA42BAC854CBA79FB3CCFAAFE980BFE6B588A,
	U3CU3Ec_U3Cget_aotStubsU3Eb__32_0_m8BA8FB5E1E2F9F9647E2F0CB328CF014891049E9,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GraphPointer_IsValidRoot_mC93ABE5041BAF865583BC91EFD10264C57A413C2,
	GraphPointer__ctor_mBE645EAFB6D080C0BEFFF95D1106F110B4683F22,
	GraphPointer_Initialize_m8921D314537D8ED33874419DEBC037297D41A191,
	NULL,
	GraphPointer_CopyFrom_mA5CF477D86FF8762A6F1C7445D9500D2EF72F26E,
	GraphPointer_get_root_m40374E3DB3AF7F45890867E15B814322172C9444,
	GraphPointer_set_root_m03A9F9A69A65AC1D3B623CBA5B05B96D9766831F,
	GraphPointer_get_rootObject_m9048A1A97B394B29A87A37E0F6A7EC5DDF8C9F9F,
	GraphPointer_get_machine_m2D1A2101988A866B9715B46960FDC404AB198EBC,
	GraphPointer_get_component_m8A3C7AC3773D3FFE1C29B06D5D296DE128CE4CB2,
	GraphPointer_get_gameObject_m16BB23EC0380D57C2019218597394A00FF806F6B,
	GraphPointer_set_gameObject_mC90622B07FA3767439C4B2A0663A5C63CC246335,
	GraphPointer_get_self_mBF1B91138567D6556FA48A8C1348C56C2EE189CF,
	GraphPointer_get_scene_m6D404294DDE9F967DC625B77ABDD7526E469D40D,
	GraphPointer_get_serializedObject_mEC5145BAAECBCB6F93F9FE6257C2F224205A5892,
	GraphPointer_get_depth_m5E363E44A84FEE61E58082467745FFE3E7D2529E,
	GraphPointer_get_isRoot_m27738ABD10A4F4FF36E3A6375E42CC62977BF680,
	GraphPointer_get_isChild_m1BAD78156B1C74FCC3FAB5F7F460A21243AA3805,
	GraphPointer_EnsureChild_m7C58DA98A951A9446B9755252048F55DFD1DDF2B,
	NULL,
	NULL,
	GraphPointer_get_parent_m06203B974A8A7B2F006191FB3CBE21A983586D3A,
	NULL,
	GraphPointer_get_parentElement_m897D7214308DDC3AE5DA510C0E99A63B9D9785CC,
	GraphPointer_get_rootGraph_m85828233DBE442EC6B27B7B1DD50695452E2B07C,
	GraphPointer_get_graph_m2D4A325AD6EF768A61123C04DEDEBCBA85058095,
	GraphPointer_get__data_mC51AFD9DC9753B7C4C88EF6D96848E9A14EDF095,
	GraphPointer_set__data_m707433FE323FE44A07D09C7C6AD546DC0A1E2570,
	GraphPointer_get_data_mF21CAE107B8D3A53A185B6EE74AD9A795A1D309E,
	GraphPointer_get__parentData_mC0AF571372FE03CE7A79DAC155A584D4CBDECA3B,
	GraphPointer_get_hasData_m8E0041F4117C4F8E4378CCF32536F95A8A1DB0A2,
	GraphPointer_EnsureDataAvailable_mD8D7E820DF671815775EB5BE7BDFDAA387C7A3E2,
	NULL,
	NULL,
	GraphPointer_get_fetchRootDebugDataBinding_mE2FA7BCEEAB1535D4DB9D902C539579B62068B9F,
	GraphPointer_get_hasDebugData_m8521576EA33D10CA3B3AD9F57AB40FB4E75382B3,
	GraphPointer_EnsureDebugDataAvailable_m7416491AA8942416BF77E14AF035F256CD1BA44A,
	GraphPointer_get__debugData_mEE1763D2DE7BC4509D10CB28FCDCE8780E6B32C6,
	GraphPointer_get_debugData_m269442643B7F3B6939D098EFBFEC9E80E55DD643,
	NULL,
	GraphPointer_TryEnterParentElement_mB9102F88BF8CF1211FB1C876EBAE522EC7975DE5,
	GraphPointer_EnterParentElement_m899D7365050FF67FBE389115830150225C3791EF,
	GraphPointer_EnterValidParentElement_m95711CA9513D3BBA33454A7CB2C8CE3274904D0D,
	GraphPointer_ExitParentElement_mCCF0824180D1720A08A302F1781456C623C24992,
	GraphPointer_get_isValid_m28C866D8CF770BA4EE77118B4D01E64E5B86F959,
	GraphPointer_InstanceEquals_mDB62F6F44AC7AEA9F5BE4BB6B488A5116939BF4B,
	GraphPointer_DefinitionEquals_m03AD763EB66388E13BE5C317D4419218AB88C972,
	GraphPointer_ComputeHashCode_mC84F82AFBA1D574D3C356D60A20ECB528ED78C50,
	GraphPointer_ToString_mE7E47F38B5EEF37509BEBD398A20E1B7C2EFE5D5,
	GraphPointerException__ctor_m37F8D13D2B113E5CC45C709336EA0CAB9403EFAA,
	GraphReference__cctor_mBB5B5863E5B9061C31FFCA2457170D5566911F20,
	GraphReference__ctor_m7B0A9609AEA822AC5553A495668015231EB1815F,
	GraphReference_New_m363C164C76769BA165271BA65F0FDFFB22F76028,
	GraphReference_New_mCCFF5292E29EA189A1DEA8CAEB3DC6ED91A499F3,
	GraphReference_CopyFrom_m4793E06BCB813508B947559D28C33DD2DDE2A902,
	GraphReference_Clone_mA03B58B33DB6E99AF4DD06EADA2ED69E55DD0A5E,
	GraphReference_AsReference_m7DDF419206F124F2261FEC7F432B5F1D51A94C39,
	GraphReference_ToStackPooled_mCB12E7C5804F8F255319FF59B6087F3E521774BF,
	GraphReference_CreateGraphData_mFC4F0B96DEC64670A612A9A31120FB9523791EBB,
	GraphReference_FreeGraphData_m230C340B862DBDD581549D8542B51DFCBACBA952,
	GraphReference_Equals_m8B881E12393ECF87F0D6285AECA821C31A9B02B9,
	GraphReference_Hash_m4007CED7CB4F9BC51586FF4E92DA8B95A4F39999,
	GraphReference_GetHashCode_m2494A38938B20A097A4ACABD1DFD8258E18115F6,
	GraphReference_op_Equality_mB3F4CCB7F3C994AC23F0C48E9733A5A735973D8B,
	GraphReference_op_Inequality_mD2003CF8F49E93D9541DE3BD4CA5895CF3A26C82,
	GraphReference_ParentReference_mECDED57DD7852AC6B8A67AA3881541E9CF098B4B,
	GraphReference_ChildReference_m46DE9F688B8D2B2559F41D18E0FFA43A14B5648F,
	GraphReference_Intern_m0BF979D12673ED0C6D9DF8B9C8F780061B57391B,
	GraphReference_FreeInvalidInterns_m68A28B4E9E9A29D1AACB8B1BA959792F425AF58C,
	GraphsExceptionUtility_SetException_m9CB1CF4FB71BA3BC7C9368030B41DA458DA09DB8,
	GraphsExceptionUtility_HandleException_m32C1DF2B8237539BC17957FE5620367FB4ADC77D,
	GraphsExceptionUtility_HandledIn_m5D68F8D100695113F5F14E61C80E357C7F3BE0A7,
	GraphStack__ctor_m0FE15FA50C3B976F6F252D95CA240CB8786E2F4B,
	GraphStack_New_m14E2E604A2DC60AB7BCF2779FE499A2C1C5E6935,
	GraphStack_Clone_m7031B78685BE832C2FEAA7ED73775ED7D7FEF4E7,
	GraphStack_Dispose_m387A82E8F15F6B68AECE1B005B5066AF6B288699,
	GraphStack_Ludiq_IPoolable_New_m4284743F88E594CC758A56A5CB0190AE7A14927A,
	GraphStack_Ludiq_IPoolable_Free_mFC53D426C1F87C3F555F1A4F17C2D8C498E2051E,
	GraphStack_AsReference_mEFA2922E3D66C097C74EDC5A0A6926F04BF31BE2,
	GraphStack_ToReference_m333FE476C1A25077ACDEDCFBFE828900A862CB96,
	GraphStack_EnterParentElement_m5625A249B305C65CDAB608E7BAC6B01F2D2C991D,
	GraphStack_TryEnterParentElement_m47671755C5D9240FC5F696895D2AB9202115B6C8,
	GraphStack_TryEnterParentElementUnsafe_m80774FD678E7FF552DF0845958FA7A24BE48559B,
	GraphStack_ExitParentElement_mDF4C5C99BF313BA43ADD934CFACCE74B20C5D7D2,
	U3CU3Ec__cctor_mF097C81FCC2819BF8636D46595D91617C84EC2C7,
	U3CU3Ec__ctor_m196892E2D2EC7F05DC646ED58486298F6030FD6E,
	U3CU3Ec_U3CNewU3Eb__3_0_m67FC5762AC9B49F84BEA03C83EA3E1D53D917372,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	GraphGroup__cctor_m105DFF01D1CACC4DC8B3A1D83C2299B64EB55C99,
	MergedGraphElementCollection_add_ItemAdded_m2112CD74EE642C4448942408A38592C166A82F34,
	MergedGraphElementCollection_remove_ItemAdded_m7235176C4C247BCA062CF7478E7B57AA7B8123D3,
	MergedGraphElementCollection_add_ItemRemoved_m6A2D1A56123A01A85D134458048BA396F5318851,
	MergedGraphElementCollection_remove_ItemRemoved_m29B23A07D536B641D5E3F682790C8BCFA03A28EC,
	MergedGraphElementCollection_add_CollectionChanged_mBB5B991F953A14FBD6C0332052B6AEC67B0406B9,
	MergedGraphElementCollection_remove_CollectionChanged_m6EDBE97AC9F03C67AE472BBE106AF742DC479754,
	NULL,
	MergedGraphElementCollection__ctor_m37B54B8BE1E6412B02DB453D2DF347F81BE0E9F5,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[339] = 
{
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1809,
	1522,
	2728,
	2728,
	2663,
	2663,
	2768,
	1809,
	1775,
	1775,
	1522,
	1522,
	1775,
	1775,
	1522,
	1775,
	1809,
	1809,
	1809,
	1775,
	1809,
	1809,
	2768,
	1809,
	1224,
	628,
	1224,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2689,
	1809,
	1522,
	1775,
	1522,
	1775,
	1522,
	1775,
	1775,
	1775,
	1775,
	1522,
	1775,
	1727,
	1775,
	1762,
	1796,
	1796,
	1809,
	-1,
	-1,
	1775,
	-1,
	1775,
	1775,
	1775,
	1775,
	1522,
	1775,
	1775,
	1796,
	1809,
	-1,
	-1,
	2753,
	1796,
	1809,
	1775,
	1775,
	-1,
	327,
	1522,
	1522,
	1809,
	1796,
	1354,
	1354,
	1762,
	1775,
	962,
	2768,
	1809,
	2419,
	2663,
	1522,
	1775,
	1775,
	1775,
	1809,
	1809,
	1354,
	1809,
	1762,
	2474,
	2474,
	1225,
	469,
	2663,
	2768,
	2328,
	2328,
	2474,
	1809,
	2663,
	1775,
	1809,
	1809,
	1809,
	1775,
	1775,
	1522,
	1354,
	1354,
	1809,
	2768,
	1809,
	1775,
	1775,
	1775,
	1522,
	1522,
	1775,
	1522,
	1796,
	1762,
	1759,
	1522,
	1522,
	1775,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1775,
	752,
	752,
	1224,
	1522,
	1224,
	1522,
	1224,
	1224,
	1775,
	1522,
	1775,
	1775,
	1809,
	1809,
	1775,
	1796,
	1775,
	1775,
	1775,
	1522,
	1775,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	1775,
	1522,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2768,
	1522,
	1522,
	1522,
	1522,
	1522,
	1522,
	-1,
	1809,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[20] = 
{
	{ 0x02000002, { 0, 4 } },
	{ 0x02000003, { 4, 48 } },
	{ 0x02000004, { 52, 21 } },
	{ 0x0200000B, { 73, 38 } },
	{ 0x0200000C, { 111, 4 } },
	{ 0x0200000D, { 115, 4 } },
	{ 0x0200000E, { 119, 12 } },
	{ 0x0200000F, { 131, 5 } },
	{ 0x02000018, { 147, 8 } },
	{ 0x02000028, { 155, 22 } },
	{ 0x0200002B, { 177, 6 } },
	{ 0x06000096, { 136, 1 } },
	{ 0x06000097, { 137, 2 } },
	{ 0x06000099, { 139, 2 } },
	{ 0x060000A3, { 141, 2 } },
	{ 0x060000A4, { 143, 2 } },
	{ 0x060000AA, { 145, 2 } },
	{ 0x0600014F, { 183, 8 } },
	{ 0x06000151, { 191, 1 } },
	{ 0x06000152, { 192, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[193] = 
{
	{ (Il2CppRGCTXDataType)2, 3833 },
	{ (Il2CppRGCTXDataType)3, 10223 },
	{ (Il2CppRGCTXDataType)3, 2308 },
	{ (Il2CppRGCTXDataType)2, 1567 },
	{ (Il2CppRGCTXDataType)2, 1616 },
	{ (Il2CppRGCTXDataType)3, 2612 },
	{ (Il2CppRGCTXDataType)2, 1618 },
	{ (Il2CppRGCTXDataType)3, 2618 },
	{ (Il2CppRGCTXDataType)2, 1059 },
	{ (Il2CppRGCTXDataType)2, 2756 },
	{ (Il2CppRGCTXDataType)3, 8354 },
	{ (Il2CppRGCTXDataType)2, 3018 },
	{ (Il2CppRGCTXDataType)3, 8378 },
	{ (Il2CppRGCTXDataType)3, 2304 },
	{ (Il2CppRGCTXDataType)3, 2307 },
	{ (Il2CppRGCTXDataType)3, 17880 },
	{ (Il2CppRGCTXDataType)3, 2616 },
	{ (Il2CppRGCTXDataType)2, 1829 },
	{ (Il2CppRGCTXDataType)3, 10221 },
	{ (Il2CppRGCTXDataType)3, 10222 },
	{ (Il2CppRGCTXDataType)3, 2306 },
	{ (Il2CppRGCTXDataType)3, 17883 },
	{ (Il2CppRGCTXDataType)3, 2622 },
	{ (Il2CppRGCTXDataType)2, 425 },
	{ (Il2CppRGCTXDataType)2, 2903 },
	{ (Il2CppRGCTXDataType)3, 8370 },
	{ (Il2CppRGCTXDataType)2, 838 },
	{ (Il2CppRGCTXDataType)3, 8369 },
	{ (Il2CppRGCTXDataType)2, 990 },
	{ (Il2CppRGCTXDataType)3, 2302 },
	{ (Il2CppRGCTXDataType)3, 8349 },
	{ (Il2CppRGCTXDataType)3, 2299 },
	{ (Il2CppRGCTXDataType)3, 2300 },
	{ (Il2CppRGCTXDataType)3, 8350 },
	{ (Il2CppRGCTXDataType)3, 2614 },
	{ (Il2CppRGCTXDataType)3, 2620 },
	{ (Il2CppRGCTXDataType)3, 8351 },
	{ (Il2CppRGCTXDataType)3, 8352 },
	{ (Il2CppRGCTXDataType)3, 2303 },
	{ (Il2CppRGCTXDataType)3, 8353 },
	{ (Il2CppRGCTXDataType)3, 2305 },
	{ (Il2CppRGCTXDataType)3, 2301 },
	{ (Il2CppRGCTXDataType)3, 2615 },
	{ (Il2CppRGCTXDataType)2, 3832 },
	{ (Il2CppRGCTXDataType)3, 10218 },
	{ (Il2CppRGCTXDataType)3, 2613 },
	{ (Il2CppRGCTXDataType)3, 2617 },
	{ (Il2CppRGCTXDataType)3, 10219 },
	{ (Il2CppRGCTXDataType)3, 2621 },
	{ (Il2CppRGCTXDataType)3, 2619 },
	{ (Il2CppRGCTXDataType)3, 2623 },
	{ (Il2CppRGCTXDataType)3, 10220 },
	{ (Il2CppRGCTXDataType)2, 2628 },
	{ (Il2CppRGCTXDataType)3, 7764 },
	{ (Il2CppRGCTXDataType)3, 2324 },
	{ (Il2CppRGCTXDataType)2, 1568 },
	{ (Il2CppRGCTXDataType)3, 7775 },
	{ (Il2CppRGCTXDataType)3, 9888 },
	{ (Il2CppRGCTXDataType)3, 1637 },
	{ (Il2CppRGCTXDataType)3, 7993 },
	{ (Il2CppRGCTXDataType)3, 9887 },
	{ (Il2CppRGCTXDataType)3, 7714 },
	{ (Il2CppRGCTXDataType)3, 2330 },
	{ (Il2CppRGCTXDataType)3, 7770 },
	{ (Il2CppRGCTXDataType)3, 7773 },
	{ (Il2CppRGCTXDataType)3, 7771 },
	{ (Il2CppRGCTXDataType)3, 7774 },
	{ (Il2CppRGCTXDataType)3, 7769 },
	{ (Il2CppRGCTXDataType)3, 7772 },
	{ (Il2CppRGCTXDataType)3, 7767 },
	{ (Il2CppRGCTXDataType)3, 7765 },
	{ (Il2CppRGCTXDataType)3, 7768 },
	{ (Il2CppRGCTXDataType)3, 7766 },
	{ (Il2CppRGCTXDataType)3, 7994 },
	{ (Il2CppRGCTXDataType)2, 2658 },
	{ (Il2CppRGCTXDataType)2, 3762 },
	{ (Il2CppRGCTXDataType)2, 1511 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 18480 },
	{ (Il2CppRGCTXDataType)2, 483 },
	{ (Il2CppRGCTXDataType)3, 7782 },
	{ (Il2CppRGCTXDataType)3, 831 },
	{ (Il2CppRGCTXDataType)3, 17873 },
	{ (Il2CppRGCTXDataType)3, 7781 },
	{ (Il2CppRGCTXDataType)3, 7778 },
	{ (Il2CppRGCTXDataType)3, 7996 },
	{ (Il2CppRGCTXDataType)3, 7776 },
	{ (Il2CppRGCTXDataType)3, 1662 },
	{ (Il2CppRGCTXDataType)3, 1640 },
	{ (Il2CppRGCTXDataType)3, 7779 },
	{ (Il2CppRGCTXDataType)3, 9889 },
	{ (Il2CppRGCTXDataType)3, 7777 },
	{ (Il2CppRGCTXDataType)3, 10155 },
	{ (Il2CppRGCTXDataType)2, 3791 },
	{ (Il2CppRGCTXDataType)3, 7780 },
	{ (Il2CppRGCTXDataType)3, 12614 },
	{ (Il2CppRGCTXDataType)3, 10225 },
	{ (Il2CppRGCTXDataType)3, 12613 },
	{ (Il2CppRGCTXDataType)2, 4118 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 0 },
	{ (Il2CppRGCTXDataType)2, 1528 },
	{ (Il2CppRGCTXDataType)3, 2064 },
	{ (Il2CppRGCTXDataType)3, 10227 },
	{ (Il2CppRGCTXDataType)3, 10226 },
	{ (Il2CppRGCTXDataType)3, 4819 },
	{ (Il2CppRGCTXDataType)3, 1645 },
	{ (Il2CppRGCTXDataType)3, 4818 },
	{ (Il2CppRGCTXDataType)2, 1862 },
	{ (Il2CppRGCTXDataType)3, 10154 },
	{ (Il2CppRGCTXDataType)3, 12612 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)3, 4 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)2, 719 },
	{ (Il2CppRGCTXDataType)3, 7736 },
	{ (Il2CppRGCTXDataType)3, 7735 },
	{ (Il2CppRGCTXDataType)3, 7738 },
	{ (Il2CppRGCTXDataType)3, 7737 },
	{ (Il2CppRGCTXDataType)3, 7903 },
	{ (Il2CppRGCTXDataType)3, 7898 },
	{ (Il2CppRGCTXDataType)3, 7897 },
	{ (Il2CppRGCTXDataType)2, 866 },
	{ (Il2CppRGCTXDataType)3, 7901 },
	{ (Il2CppRGCTXDataType)2, 486 },
	{ (Il2CppRGCTXDataType)3, 7899 },
	{ (Il2CppRGCTXDataType)3, 11890 },
	{ (Il2CppRGCTXDataType)3, 7900 },
	{ (Il2CppRGCTXDataType)3, 7902 },
	{ (Il2CppRGCTXDataType)2, 1359 },
	{ (Il2CppRGCTXDataType)3, 774 },
	{ (Il2CppRGCTXDataType)3, 7938 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)2, 1360 },
	{ (Il2CppRGCTXDataType)3, 775 },
	{ (Il2CppRGCTXDataType)3, 776 },
	{ (Il2CppRGCTXDataType)2, 211 },
	{ (Il2CppRGCTXDataType)3, 18463 },
	{ (Il2CppRGCTXDataType)1, 212 },
	{ (Il2CppRGCTXDataType)3, 18434 },
	{ (Il2CppRGCTXDataType)2, 216 },
	{ (Il2CppRGCTXDataType)2, 215 },
	{ (Il2CppRGCTXDataType)1, 215 },
	{ (Il2CppRGCTXDataType)2, 213 },
	{ (Il2CppRGCTXDataType)1, 213 },
	{ (Il2CppRGCTXDataType)2, 214 },
	{ (Il2CppRGCTXDataType)1, 214 },
	{ (Il2CppRGCTXDataType)3, 7810 },
	{ (Il2CppRGCTXDataType)2, 484 },
	{ (Il2CppRGCTXDataType)3, 7808 },
	{ (Il2CppRGCTXDataType)3, 7809 },
	{ (Il2CppRGCTXDataType)3, 7807 },
	{ (Il2CppRGCTXDataType)3, 17930 },
	{ (Il2CppRGCTXDataType)3, 7812 },
	{ (Il2CppRGCTXDataType)3, 7811 },
	{ (Il2CppRGCTXDataType)2, 2643 },
	{ (Il2CppRGCTXDataType)3, 7904 },
	{ (Il2CppRGCTXDataType)3, 11824 },
	{ (Il2CppRGCTXDataType)3, 7911 },
	{ (Il2CppRGCTXDataType)3, 7912 },
	{ (Il2CppRGCTXDataType)3, 11825 },
	{ (Il2CppRGCTXDataType)3, 7908 },
	{ (Il2CppRGCTXDataType)3, 7910 },
	{ (Il2CppRGCTXDataType)3, 7909 },
	{ (Il2CppRGCTXDataType)2, 897 },
	{ (Il2CppRGCTXDataType)3, 11823 },
	{ (Il2CppRGCTXDataType)2, 557 },
	{ (Il2CppRGCTXDataType)3, 7907 },
	{ (Il2CppRGCTXDataType)3, 11816 },
	{ (Il2CppRGCTXDataType)3, 7905 },
	{ (Il2CppRGCTXDataType)3, 11817 },
	{ (Il2CppRGCTXDataType)3, 7906 },
	{ (Il2CppRGCTXDataType)3, 11819 },
	{ (Il2CppRGCTXDataType)3, 11822 },
	{ (Il2CppRGCTXDataType)3, 11820 },
	{ (Il2CppRGCTXDataType)3, 11821 },
	{ (Il2CppRGCTXDataType)3, 11818 },
	{ (Il2CppRGCTXDataType)2, 558 },
	{ (Il2CppRGCTXDataType)3, 11892 },
	{ (Il2CppRGCTXDataType)3, 11894 },
	{ (Il2CppRGCTXDataType)3, 11891 },
	{ (Il2CppRGCTXDataType)3, 11893 },
	{ (Il2CppRGCTXDataType)3, 16219 },
	{ (Il2CppRGCTXDataType)3, 12010 },
	{ (Il2CppRGCTXDataType)2, 3465 },
	{ (Il2CppRGCTXDataType)3, 18631 },
	{ (Il2CppRGCTXDataType)2, 1368 },
	{ (Il2CppRGCTXDataType)3, 829 },
	{ (Il2CppRGCTXDataType)2, 3586 },
	{ (Il2CppRGCTXDataType)3, 18633 },
	{ (Il2CppRGCTXDataType)3, 18635 },
	{ (Il2CppRGCTXDataType)2, 262 },
	{ (Il2CppRGCTXDataType)2, 263 },
};
extern const CustomAttributesCacheGenerator g_Ludiq_Graphs_Runtime_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Ludiq_Graphs_Runtime_CodeGenModule;
const Il2CppCodeGenModule g_Ludiq_Graphs_Runtime_CodeGenModule = 
{
	"Ludiq.Graphs.Runtime.dll",
	339,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	20,
	s_rgctxIndices,
	193,
	s_rgctxValues,
	NULL,
	g_Ludiq_Graphs_Runtime_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
