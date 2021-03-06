// ESRI-defined Category IDs

/*
COPYRIGHT � 2006 ESRI 

TRADE SECRETS: ESRI PROPRIETARY AND CONFIDENTIAL 
Unpublished material - all rights reserved under the 
Copyright Laws of the United States and applicable international 
laws, treaties, and conventions. 

For additional information, contact: 
Environmental Systems Research Institute, Inc. 
Attn: Contracts and Legal Services Department 
380 New York Street 
Redlands, California, 92373 
USA 

email: contracts@esri.com 
*/


// ======================================
// AfUIcatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{C899AE27-E515-11D1-877C-0000F8751720}")) CATID_PropertyPages;
struct __declspec(uuid("{9A797CC1-5E01-11D2-9181-0000F87808EE}")) CATID_PrinterPropertyPages;
struct __declspec(uuid("{17049F82-8E15-11D2-983E-0080C7E04196}")) CATID_StyleImporter;
struct __declspec(uuid("{5FDE099A-7B12-11D2-ACF9-0000F87808EE}")) CATID_ExporterPropertyPages;
struct __declspec(uuid("{88002C0B-939A-11D2-AE73-080009EC732A}")) CATID_NumberFormatPropertyPages;
struct __declspec(uuid("{B6DD2405-29D6-11D3-B8AD-00600802E603}")) CATID_StylePropertyPages;
struct __declspec(uuid("{31CB4BD9-2FDC-11D3-9F58-00C04F6BC709}")) CATID_ColorPropertyPages;
struct __declspec(uuid("{3745A6D7-50EF-11D3-9FF4-00C04F6BC8DD}")) CATID_ColorCorrectionPages;
struct __declspec(uuid("{FB5216EF-6AC6-11D3-9F4E-00C04F6BC8DD}")) CATID_FontMappingPropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{AF218092-47D4-4119-A458-7F320E08687F}")) CATID_StyleImporter;
struct __declspec(uuid("{72674207-C9C2-4828-AAE9-4D988C1F673F}")) CATID_StylePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// AnimationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{E0D5ED2C-FD68-4435-A345-0EF45D11DED9}")) CATID_AGAnimationPropertyPages;
struct __declspec(uuid("{310C13BB-2813-4F9A-B202-4F7C23829F92}")) CATID_MapAnimationTypes;
struct __declspec(uuid("{E133E49C-536A-4647-8ED3-63F8DC6016D5}")) CATID_AnimationVideoExporters;
struct __declspec(uuid("{856A40CB-3D91-4B19-897C-9CF138E43529}")) CATID_VideoExporterPropertyPages;
struct __declspec(uuid("{59242FFB-0BBB-49FB-B335-3F0B5756B314}")) CATID_AGAnimationTrackPropertyPages;
struct __declspec(uuid("{40E36900-0A42-4CB7-8748-2623538D1D85}")) CATID_AGAnimationKeyframePropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{C6E8BF25-65E2-427A-AF32-2C08B0CC9EF0}")) CATID_AnimationVideoExporters;
struct __declspec(uuid("{9CBC3423-5128-4B38-B22A-07AC7E28D8E0}")) CATID_MapAnimationTypes;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// AnnotationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{02D588E1-3D42-11D2-A2A2-080009B6F22B}")) CATID_AnnotationExpressionParsers;
struct __declspec(uuid("{F3E803A1-6EC5-11D2-A2C6-080009B6F22B}")) CATID_AnnotationExpresionPages;
struct __declspec(uuid("{2B5310E1-6EC9-11D2-A2C6-080009B6F22B}")) CATID_AnnotationPlacementPages;
struct __declspec(uuid("{E4EF2AAE-F050-4070-9CDF-8823F4D4992B}")) CATID_AnnotationPlacementPluginPages;
struct __declspec(uuid("{9E1FF0EB-BE15-4C55-B2CB-F96B73D1D905}")) CATID_LabelStyleSelectors;
struct __declspec(uuid("{4C90DE7D-CB77-11D2-9F34-00C04F6BC6A5}")) CATID_LabelStylePages;
struct __declspec(uuid("{6ED8B756-1BAA-12D3-9FB3-00C04F6BB7A6}")) CATID_AnnotationPropertiesConverters;
struct __declspec(uuid("{D80B7114-739C-4ECB-AD06-4DF67C0E6596}")) CATID_LayerLabelsPropertyPages;
struct __declspec(uuid("{895F0E7F-7451-4F9E-ADAA-B56ABE81D5D3}")) CATID_Overposters;
struct __declspec(uuid("{4D1F6762-971D-46EA-B4FB-65801E5A4EDD}")) CATID_OverposterPropertiesPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{35C1E6F9-43EF-40DA-A89C-BD0EC1239946}")) CATID_AnnotationExpressionParsers;
struct __declspec(uuid("{25B6156C-C8A5-4548-80BA-C3C4C6310807}")) CATID_AnnotationPropertiesConverters;
struct __declspec(uuid("{1787090A-CEE2-4BA9-B8F0-290DE78BD5B5}")) CATID_LabelStylePages;
struct __declspec(uuid("{D60609BA-265F-4F3F-98A4-642EE7D33365}")) CATID_Overposters;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// APECatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{AC8A32A0-B685-450E-A356-B34CA234ECDB}")) CATID_APEExtension;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ArcSurveyCATIDs.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{8EC5B082-F2C9-11D4-BAC0-106938000000}")) CATID_GxSurveyModels;
struct __declspec(uuid("{88BBF6F1-5CE6-11D4-BA2E-AC5866000000}")) CATID_GxSurveyDatasetMenuItems;
struct __declspec(uuid("{A79965F1-4878-11D4-BA1A-345B85000000}")) CATID_GxSurveyMenuItems;
struct __declspec(uuid("{B7DF8567-675D-4344-AE11-7A0186297256}")) CATID_GxSurveyDeletedMenuItems;
struct __declspec(uuid("{2C52A2B1-5D00-11D4-BA2E-AC5866000000}")) CATID_GxSurveyFolderMenuItems;
struct __declspec(uuid("{A79965F2-4878-11D4-BA1A-345B85000000}")) CATID_GxScalarReferencesFolderMenuItems;
struct __declspec(uuid("{6C81ABA2-48FA-11D4-BA1A-345B85000000}")) CATID_GxScalarReferenceBaseMenuItems;
struct __declspec(uuid("{C055DA71-4B5F-11D4-BA1C-4A492F000000}")) CATID_GxScalarReferenceMenuItems;
struct __declspec(uuid("{69BCC181-1334-11D5-BAE9-C8AA62000000}")) CATID_GxSurveyDatasetPropertyPages;
struct __declspec(uuid("{818623B1-1334-11D5-BAE9-C8AA62000000}")) CATID_GxSurveyPropertyPages;
struct __declspec(uuid("{B3F24957-266F-11D4-BA34-00508BA0C8DD}")) CATID_SurveyLayerMenuItems;
struct __declspec(uuid("{6ECAFB01-10E5-11D5-BAE9-C8AA62000000}")) CATID_SurveySubLayerMenuItems;
struct __declspec(uuid("{115FC081-FC2F-11D4-BACB-BCF0C1000000}")) CATID_SurveyRenderers;
struct __declspec(uuid("{F4BB3A51-FC71-11D4-BACB-BCF0C1000000}")) CATID_SurveyRendererPropertyPages;
struct __declspec(uuid("{BA5D278B-05AF-4BAA-A5CB-86475E7603A4}")) CATID_DataMenuItems;
struct __declspec(uuid("{19A8A221-140A-11D6-9269-00508B48AE82}")) CATID_MxSurveyExtensions;
struct __declspec(uuid("{5BCE3B12-DB2E-11D4-BAAC-705471000000}")) CATID_SurveyEditorTools;
struct __declspec(uuid("{D8C75791-1C40-11D5-BAF5-CAD001000000}")) CATID_SurveyExplorerListRows;
struct __declspec(uuid("{4ABAE651-ED86-11D4-BABB-88A42E000000}")) CATID_SurveyExplorerTbrItems;
struct __declspec(uuid("{ED1F64A1-E0F0-11D4-BAAD-2E4AF0000000}")) CATID_SurveyExplorerLVLeftColMenuItems;
struct __declspec(uuid("{5406EE51-F23A-11D4-BAC0-106938000000}")) CATID_SurveyEditorExtensions;
struct __declspec(uuid("{D1FEE051-492E-11D5-BB21-061EE5000000}")) CATID_SurveyEditorUOMFormats;
struct __declspec(uuid("{F6076CA1-F27D-11D4-BAC0-106938000000}")) CATID_SurveyEditorPropertyPages;
struct __declspec(uuid("{6EEF7701-15FD-11D5-BAEF-507629000000}")) CATID_SurveyQueryDefViews;
struct __declspec(uuid("{C2F26461-4B07-11D5-BB23-10C7E6000000}")) CATID_SurveyEditorUOMFormatPropertyPages;
struct __declspec(uuid("{2FF7E1A1-4F8B-11D5-B390-009027BE2299}")) CATID_SurveyAnalystTbrItems;
struct __declspec(uuid("{92D886A1-50D7-11D5-B391-009027BE2299}")) CATID_SurveyAnalystMenuItems;
struct __declspec(uuid("{39AABBE1-E933-11D3-93A6-009027BE2299}")) CATID_SurveyComputationCorrections;
struct __declspec(uuid("{EE102BC9-56AE-11D6-9278-00508B48AE82}")) CATID_CustomCorrections;
struct __declspec(uuid("{9ADC251D-A113-11D4-91F6-00508B48AE82}")) CATID_SurveyImportConverters;
struct __declspec(uuid("{6C927AB5-C44A-11D4-91FF-00508B48AE82}")) CATID_SurveyExportConverters;
struct __declspec(uuid("{9ADC251C-A113-11D4-91F6-00508B48AE82}")) CATID_GSIOperationCodeHandlers;
struct __declspec(uuid("{5F2F1176-A455-11D5-9954-00105A904F94}")) CATID_AsciiOperationCodeHandlers;
struct __declspec(uuid("{5F2F1178-A455-11D5-9954-00105A904F94}")) CATID_GeodimeterOperationCodeHandlers;
struct __declspec(uuid("{5F2F1179-A455-11D5-9954-00105A904F94}")) CATID_SDROperationCodeHandlers;
struct __declspec(uuid("{5F2F117A-A455-11D5-9954-00105A904F94}")) CATID_TDSRawOperationCodeHandlers;
struct __declspec(uuid("{5F2F117B-A455-11D5-9954-00105A904F94}")) CATID_TDSCoordOperationCodeHandlers;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// CadastralEditorUICatID.h

struct __declspec(uuid("{DB89CF8D-FB81-4900-9BFE-37D83C376825}")) CATID_CadastralEditorPages;
struct __declspec(uuid("{F2562D4C-66C3-47C3-B413-8554C9F944F8}")) CATID_ConstructionToolContextMenuItems;
struct __declspec(uuid("{16B2A5BC-9805-4F61-AFF9-6B43D8E9E401}")) CATID_BuildMethods;
struct __declspec(uuid("{0829B6F2-79A2-4CCC-BC50-7535634E065F}")) CATID_CadastralPlanPages;


// ======================================
// CadCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{83EEE9BF-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadFeatureContextMenuCommands;
struct __declspec(uuid("{83EEE9C0-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadFeatureClassContextMenuCommands;
struct __declspec(uuid("{83EEE9C1-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadDrawingContextMenuCommands;
struct __declspec(uuid("{83EEE9C2-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadFeatureExportMenuCommands;
struct __declspec(uuid("{83EEE9C3-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadFeatureClassExportMenuCommands;
struct __declspec(uuid("{83EEE9C4-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadDrawingExportMenuCommands;
struct __declspec(uuid("{83EEE9C5-0CB1-11D3-9B35-00C04FA33299}")) CATID_CadFeaturePropertyPages;
struct __declspec(uuid("{83EEE9C6-0CB1-11D3-9B35-00C04FA33299}")) CATID_CadFeatureClassPropertyPages;
struct __declspec(uuid("{83EEE9C7-0CB1-11D3-9B35-00C04FA33299}")) CATID_CadDrawingPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// COGOObjectsCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{79B4603F-9A62-4EC1-B543-E1CD4B72090B}")) CATID_CustomCOGOObjects;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ColorRampCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{2411EC71-8BCC-11D2-A2EE-080009B6F22B}")) CATID_ColorRamp;
struct __declspec(uuid("{2411EC72-8BCC-11D2-A2EE-080009B6F22B}")) CATID_ColorRampPropetyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{B0449C9E-7A75-4929-B6E6-79F170910800}")) CATID_ColorRamp;
struct __declspec(uuid("{1FE2FCE7-DDF1-421A-BF76-FCDAAB9CC9A1}")) CATID_ColorRampPropetyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ControlsCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{B284D891-22EE-4F12-A0A9-B1DDED9197F4}")) CATID_ControlsCommands;
struct __declspec(uuid("{5155BBC7-A6E9-4AF9-81DB-A16742D5A026}")) CATID_ControlsToolbars;
struct __declspec(uuid("{B7D74382-06A8-483F-8FE5-6FB08FAA356A}")) CATID_ControlsMenus;
struct __declspec(uuid("{F278DFAD-3B0B-4708-99BF-227B113CB10B}")) CATID_ControlsPalettes;
struct __declspec(uuid("{03B065EF-FA91-4B06-9E03-D5F40EF605E1}")) CATID_EngineEditTasks;
struct __declspec(uuid("{85382FF5-7283-4276-A467-5A75308D0C65}")) CATID_EngineSnapAgents;
struct __declspec(uuid("{E194B8CD-E477-4A81-BDC7-8FCA8E4C62A1}")) CATID_EngineNetworkAnalystWindowItemCategory;
struct __declspec(uuid("{E6036C13-5FD0-4AAD-963E-BCF61E6CD646}")) CATID_EngineSchematicCreateDiagramDialog;
struct __declspec(uuid("{A7C4AED2-AD49-45A6-874D-80124D6105D9}")) CATID_SchematicBuilderEngine;
struct __declspec(uuid("{B4981936-C398-4354-B857-CB8AB4BF67FE}")) CATID_EngineRoutingServiceCategory;
struct __declspec(uuid("{95EE56FB-E629-4BBA-A439-0DA9EB4DD27C}")) CATID_EngineSchematicSaveAsDiagramDialog;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{F2ADA160-E48E-4ABC-9D7C-6152FB1388EC}")) CATID_ControlsCommands;
struct __declspec(uuid("{26369195-A51F-43B0-8F69-4509281AD38E}")) CATID_ControlsMenus;
struct __declspec(uuid("{C3FF2691-3911-4DAE-B877-FD1DF4BC7535}")) CATID_ControlsPalettes;
struct __declspec(uuid("{730D6B9E-7CAF-46EF-9E4A-A1736D4C73A3}")) CATID_ControlsToolbars;
struct __declspec(uuid("{D7F1AB64-1EB5-4A0B-B654-C26E075BE114}")) CATID_EngineEditTasks;
struct __declspec(uuid("{FB1167BC-B64F-4743-B86C-890422323478}")) CATID_EngineNetworkAnalystWindowItemCategory;
struct __declspec(uuid("{B1BDC92A-EED7-44DC-A5ED-B170D975F0D7}")) CATID_EngineRoutingServiceCategory;
struct __declspec(uuid("{CA5B3FAC-E1AB-43A8-899D-74846E708DFC}")) CATID_EngineSchematicCreateDiagramDialog;
struct __declspec(uuid("{9C6E0A00-E31A-4CC1-B76B-11D3C9752F82}")) CATID_EngineSchematicSaveAsDiagramDialog;
struct __declspec(uuid("{6063A312-5C65-495E-A798-532C9C581C13}")) CATID_EngineSnapAgents;
struct __declspec(uuid("{C76016C2-44D8-479C-9E05-B75519D7828D}")) CATID_SchematicBuilderEngine;
#endif // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{14C731E1-AAB5-4502-AD7D-08B6C963C997}")) CATID_EngineDataDialogBrowser;


// ======================================
// CoverageCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{25B9A22F-E6C7-11D2-9F30-00C04F79927C}")) CATID_GxCoverageContextMenuCommands;
struct __declspec(uuid("{25B9A230-E6C7-11D2-9F30-00C04F79927C}")) CATID_GxCoverageFeatureClassContextMenuCommands;
struct __declspec(uuid("{25B9A231-E6C7-11D2-9F30-00C04F79927C}")) CATID_GxInfoTableContextMenuCommands;
struct __declspec(uuid("{C65A2BB4-32ED-11D3-9F33-00C04F79927C}")) CATID_GxPre70CoverageContextMenuCommands;
struct __declspec(uuid("{4B6C687E-66D2-11D3-9F36-00C04F79927C}")) CATID_GxPCCoverageContextMenuCommands;
struct __declspec(uuid("{4B6C687F-66D2-11D3-9F36-00C04F79927C}")) CATID_GxPCCoverageFeatureClassContextMenuCommands;
struct __declspec(uuid("{1449254B-319B-11D3-9F33-00C04F79927C}")) CATID_GxCoverageNewMenuCommands;
struct __declspec(uuid("{A6BF6E97-EB70-11D2-9F31-00C04F79927C}")) CATID_GxCoverageExportMenuCommands;
struct __declspec(uuid("{A6BF6E98-EB70-11D2-9F31-00C04F79927C}")) CATID_GxCoverageFeatureClassExportMenuCommands;
struct __declspec(uuid("{A6BF6E99-EB70-11D2-9F31-00C04F79927C}")) CATID_GxInfoTableExportMenuCommands;
struct __declspec(uuid("{506187AA-301B-11D4-9FC8-00C04F6BDF06}")) CATID_GxInfoTableToFeatureClassMenuCommands;
struct __declspec(uuid("{5F7BBE83-E6EC-11D2-9F30-00C04F79927C}")) CATID_CoveragePropertyPages;
struct __declspec(uuid("{5F7BBE84-E6EC-11D2-9F30-00C04F79927C}")) CATID_CoverageFeatureClassPropertyPages;
struct __declspec(uuid("{5F7BBE85-E6EC-11D2-9F30-00C04F79927C}")) CATID_InfoTablePropertyPages;
struct __declspec(uuid("{C65A2BB7-32ED-11D3-9F33-00C04F79927C}")) CATID_Pre70CoveragePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// DataGraphCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{B14315A5-098A-11D4-A676-0008C7DF88DB}")) CATID_GxDataGraphContextMenuCommands;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// DataGraphUICatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{977D75CF-E00C-11D3-A664-0008C7DF88DB}")) CATID_DataGraphPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// DimensionCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{0864F69B-E975-11D3-9F79-00C04F6BDDD9}")) CATID_DimensionConstructors;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// EdgeCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{3B5C1D75-C440-4EBF-B629-ACCAD41BF396}")) CATID_GxStreetMapFeatureClassContextMenuCommands;
struct __declspec(uuid("{5DBC42A8-3F19-4138-BDFE-C8EB60456A0F}")) CATID_GxStreetMapFeatureClassExportMenuCommands;
struct __declspec(uuid("{F1B979F7-AE98-478A-8A80-C731B8C8F3E9}")) CATID_GxStreetMapFeatureClassPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// FeatureLayerCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{7480BE41-EEA1-4E16-858C-B2AB6C92F720}")) CATID_FeatureLayerSymbology;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{3D98E5DF-DC99-4169-A0C7-5DFBDC55A95D}")) CATID_FeatureLayerSymbology;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GarciaCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{58122E50-D89C-11D2-9F25-00C04F6BC979}")) CATID_EditTasks;
struct __declspec(uuid("{58122E51-D89C-11D2-9F25-00C04F6BC979}")) CATID_EditorExtensions;
struct __declspec(uuid("{58122E52-D89C-11D2-9F25-00C04F6BC979}")) CATID_EditorPropertyPages;
struct __declspec(uuid("{5844F9F6-DC03-11D2-9F26-00C04F6BC979}")) CATID_SnapAgents;
struct __declspec(uuid("{0224F7BC-F736-11D2-9F2E-00C04F6BC979}")) CATID_VersionPropertyPages;
struct __declspec(uuid("{3DD0D4DC-01E6-41AC-BB50-108D11C763A7}")) CATID_SketchToolMenuCommands;
struct __declspec(uuid("{E98F1115-EFA4-41D7-9982-F733FF42BA0B}")) CATID_EditToolMenuCommands;
struct __declspec(uuid("{4F932E6B-2BD6-41E2-B41F-2FE4FF508109}")) CATID_SketchToolPaletteCommands;
struct __declspec(uuid("{3DD0D4DD-01E6-41AC-BB50-108D11C763A7}")) CATID_SketchMenuCommands;
struct __declspec(uuid("{51C6C6AB-DACE-49DB-AF63-32F241C35E49}")) CATID_AttributeTransferTypes;
struct __declspec(uuid("{0DA7AF0F-EA0F-4EC8-96EA-96642C8C7524}")) CATID_EditorToolbars;
struct __declspec(uuid("{76A8ECAD-B02F-4A89-9EE0-AEA83B5BB2A2}")) CATID_AnnoEditToolMenuCommands;
struct __declspec(uuid("{7AE18D82-7FA4-4053-97B9-F65627D92FFD}")) CATID_AnnotationConstructors;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GeoAnalysisCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{3297E9C1-93A1-11D2-9F33-00C04F8ED1D7}")) CATID_GeoAnalysis;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{70662278-526A-47E1-9F24-0D93218BCAC9}")) CATID_GeoAnalysis;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GeoDatabaseCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{C255D343-CB5C-11D2-9F3C-00C04F6BC626}")) CATID_WorkspacePropertyPages;
struct __declspec(uuid("{C255D347-CB5C-11D2-9F3C-00C04F6BC626}")) CATID_WorkspaceDomainsPropertyPages;
struct __declspec(uuid("{750D818D-E0B5-11D2-99BF-0000F80372B4}")) CATID_TablePropertyPages;
struct __declspec(uuid("{750D818E-E0B5-11D2-99BF-0000F80372B4}")) CATID_FeatureClassPropertyPages;
struct __declspec(uuid("{750D818F-E0B5-11D2-99BF-0000F80372B4}")) CATID_GeometricNetworkPropertyPages;
struct __declspec(uuid("{0D74B021-D997-4CBD-9A35-F22DDFB29519}")) CATID_TopologyPropertyPages;
struct __declspec(uuid("{05318B65-DE31-11D2-9F54-00C04F6BC626}")) CATID_RelationshipClassPropertyPages;
struct __declspec(uuid("{7E9913E1-E22E-11D2-99C0-0000F80372B4}")) CATID_GeographicCoordSysPropertyPages;
struct __declspec(uuid("{7E9913E2-E22E-11D2-99C0-0000F80372B4}")) CATID_ProjectedCoordSysPropertyPages;
struct __declspec(uuid("{9D8F83A2-02DB-4464-8314-188C554ED6DC}")) CATID_VerticalCoordSysPropertyPages;
struct __declspec(uuid("{6EDC31E1-E3AD-11D2-99C1-0000F80372B4}")) CATID_FeatureDatasetPropertyPages;
struct __declspec(uuid("{32DBF620-5D33-4CEB-90E5-5A884DED680B}")) CATID_TerrainPropertyPages;
struct __declspec(uuid("{D80D64ED-0B0F-4C45-B68C-F71F1C310353}")) CATID_NativeTypes;
struct __declspec(uuid("{A802F1A4-E795-4169-997C-6B8FE2F53F98}")) CATID_MetadataSynchronizers;
struct __declspec(uuid("{3A53529A-F2C2-4015-A61B-F8760FD4429E}")) CATID_DatabaseServerPropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{0F24B9D9-3EDD-4333-8BAD-1901A9B90C33}")) CATID_MetadataSynchronizers;
struct __declspec(uuid("{FBEB4959-53E3-4169-AA90-59FCC02556BA}")) CATID_NativeTypes;
#endif // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{6BC02511-2FFD-4D04-B98A-BB999D5A0062}")) CATID_CadastralFabricPropertyPages;


// ======================================
// GeoObjectCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{D4E2A321-5D59-11D2-89FD-006097AFF44E}")) CATID_GeoObjects;
struct __declspec(uuid("{D4E2A322-5D59-11D2-89FD-006097AFF44E}")) CATID_GeoObjectClassExtensions;
struct __declspec(uuid("{0813623A-A72E-11D2-8924-0000F877762D}")) CATID_GeoObjectClassDescriptions;
struct __declspec(uuid("{DA10C1C7-09A3-11D4-9FAA-00C04F6BDF0C}")) CATID_GeodatabaseWorkspaceExtensions;
struct __declspec(uuid("{F9196CDC-C3F2-4AE6-A1B2-6A364141E873}")) CATID_WorkspaceDatasetExtensions;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{02D86CF9-DB3D-475E-A9FF-B8C8B9565FBA}")) CATID_GeoObjectClassDescriptions;
struct __declspec(uuid("{64B82EC7-810B-4751-9974-CE183CD94658}")) CATID_GeoObjectClassExtensions;
struct __declspec(uuid("{96BA2EAC-EAF3-4866-8D3E-D9B210DC9D6F}")) CATID_GeoObjects;
struct __declspec(uuid("{D8A091BF-DD2B-45AD-B7F3-6BCA7B753296}")) CATID_GeodatabaseWorkspaceExtensions;
struct __declspec(uuid("{491A2DB7-9DB1-4412-B64A-A340D63E91E9}")) CATID_WorkspaceDatasetExtensions;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GeoProcessingCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{FD939A4A-955D-4094-B440-77083E410F41}")) CATID_GPFunctionFactories;
struct __declspec(uuid("{CDA62C78-1221-4246-A622-61C354091657}")) CATID_GPDataTypeFactories;
struct __declspec(uuid("{B843DF6C-00FA-4BCB-B4E2-1BF6A0270C59}")) CATID_GPFileTypes;
struct __declspec(uuid("{02079C92-481B-4C37-8CD6-F530109D6016}")) CATID_GPToolExtensionFactories;
struct __declspec(uuid("{795E26E5-A5F4-4A82-AF45-EFA8BB6BC637}")) CATID_GxToolboxesFolderContextMenuCommands;
struct __declspec(uuid("{9EEC0A0C-9ED4-42D4-8FC8-4CC4C7E25EAD}")) CATID_GxToolboxesFolderNewMenuCommands;
struct __declspec(uuid("{F039FC65-859F-4F38-AFD4-28590C3CFDDE}")) CATID_GxToolboxContextMenuCommands;
struct __declspec(uuid("{F992AE1F-6C3F-43F4-BD34-95913B50289B}")) CATID_GxEnterpriseToolboxContextMenuCommands;
struct __declspec(uuid("{502D09BC-37CF-4A2C-B84C-9C8AC6A6F499}")) CATID_GxToolboxNewMenuCommands;
struct __declspec(uuid("{C64A9BAF-B0F1-4FA1-8663-98752C4FAA24}")) CATID_GxToolboxAddMenuCommands;
struct __declspec(uuid("{8C30CDA6-6124-4E49-88F1-8E6F8C831A2D}")) CATID_GxToolsetContextMenuCommands;
struct __declspec(uuid("{09D5B1A2-1208-4C12-A53A-18722A83E1D4}")) CATID_GxToolsetNewMenuCommands;
struct __declspec(uuid("{D46149BC-9194-4D53-A0E8-5BB8D951FAC3}")) CATID_GxToolsetAddMenuCommands;
struct __declspec(uuid("{301C24FF-4817-4660-8028-E9906827592C}")) CATID_GxToolContextMenuCommands;
struct __declspec(uuid("{49F484F5-C1D5-4D89-B586-D23B5DF54E03}")) CATID_GPToolPropertyPages;
struct __declspec(uuid("{303635ED-41E4-4259-AF51-6C00DF5B30DB}")) CATID_MdProcessPropertyPages;
struct __declspec(uuid("{F11ED154-DAB2-4B5C-9C31-AD1CDC06A20C}")) CATID_GPToolboxPropertyPages;
struct __declspec(uuid("{B3612488-785F-4784-B967-D6EE34B72EAF}")) CATID_GPToolMetadataPropertyPages;
struct __declspec(uuid("{AB874504-AF04-4138-9372-54311F8A3064}")) CATID_GPToolboxMetadataPropertyPages;
struct __declspec(uuid("{DDB9EA8D-8D12-42A4-B3D4-C3E9D371CAD9}")) CATID_MdElementPropertyPages;
struct __declspec(uuid("{1CC0FC51-B1E0-4E78-95AC-C2F699890C43}")) CATID_MdElementMetadataPropertyPages;
struct __declspec(uuid("{EE49CC60-5269-49BD-A42C-957297C8EE47}")) CATID_MdDiagramPropertyPages;
struct __declspec(uuid("{0E771440-2E3B-4D88-B0BD-51F9684DAF9E}")) CATID_ModelScriptConverters;
struct __declspec(uuid("{318BD39C-284F-4771-8957-8958FD8FA295}")) CATID_ArcToolboxViews;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{7D330D12-DC5B-441F-BD4B-F59C0A73A2AA}")) CATID_GPDataTypeFactories;
struct __declspec(uuid("{F55CB64F-13F7-4A68-8DC3-A3BEF85FD854}")) CATID_GPFunctionFactories;
struct __declspec(uuid("{9489C94C-9074-4790-A5F9-9DA4037DDF83}")) CATID_GPFileTypes;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GeoRefCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{9FB18846-5930-4D7A-AFBE-0FF2E4B6DA8C}")) CATID_GeoRefSaveAsDlg;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GeostatCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{DA805B10-54D7-11D3-8D39-00C04F5B87B2}")) CATID_ESDAEngineMethods;
struct __declspec(uuid("{23B9BCD6-6F6F-11D2-AAC3-00C04FA375FB}")) CATID_GSEngineMethods;
struct __declspec(uuid("{60B20514-C449-11D3-A63F-0008C7BF3347}")) CATID_GARenderers;
struct __declspec(uuid("{ACCCD296-9D8E-4F6B-97F4-39D65330D891}")) CATID_GeostatExtensions;
struct __declspec(uuid("{22FA66AB-1522-4463-A230-89BFC071C16F}")) CATID_GARenderersPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GisClientCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{7B614D6C-647C-409E-B17F-72FD06546CD8}")) CATID_ServerObjectDescriptions;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{A7B24F3E-2F40-42E6-982F-618993356CDE}")) CATID_ServerObjectDescriptions;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GMxCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{720E21D2-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxPalettes;
struct __declspec(uuid("{720E21D3-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxCommandBars;
struct __declspec(uuid("{720E21D4-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxCommands;
struct __declspec(uuid("{720E21D5-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxRootObjects;
struct __declspec(uuid("{720E21D6-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxExtensions;
struct __declspec(uuid("{99A23410-D290-41C8-83D8-123D37A1B67B}")) CATID_GMxExtensionsJIT;
struct __declspec(uuid("{720E21D7-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxContentsViews;
struct __declspec(uuid("{720E21D8-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxDockableWindows;
struct __declspec(uuid("{720E21D9-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxContextAnalyzers;
struct __declspec(uuid("{720E21DA-2199-11D6-B2B3-00508BCDDE28}")) CATID_GlobePropertyPages;
struct __declspec(uuid("{720E21DB-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxLayerPropertyPages;
struct __declspec(uuid("{FD472D9C-43DB-4C67-B56E-A590CE7B47DC}")) CATID_GMxBaseLayerPropertyPages;
struct __declspec(uuid("{720E21DC-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxPropertyPages;
struct __declspec(uuid("{720E21DD-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxFinders;
struct __declspec(uuid("{720E21DE-2199-11D6-B2B3-00508BCDDE28}")) CATID_GMxOptionsPropertyPages;
struct __declspec(uuid("{350DE633-42A4-458D-B07B-35D3B10E12B6}")) CATID_GlobeAnimationTypes;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{FD58A149-6775-4AA0-8380-97D954CBAB87}")) CATID_GMxFinders;
struct __declspec(uuid("{0E144489-39E2-4396-BFAB-AC0C32BDF95E}")) CATID_GlobeAnimationTypes;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GPNACoreCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{012E2FC3-227C-4401-8214-EE4A9C9A52BD}")) CATID_Comparators;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GraphicElementsCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{EB5A6D39-DE07-11D2-B868-00600802E603}")) CATID_Borders;
struct __declspec(uuid("{EB5A6D3A-DE07-11D2-B868-00600802E603}")) CATID_Backgrounds;
struct __declspec(uuid("{4DE36362-E872-4159-B2DB-3ECEA4F57F0E}")) CATID_Shadows;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{526427BC-1817-4BE4-A24A-3476F7E71C62}")) CATID_Backgrounds;
struct __declspec(uuid("{3CF4867D-9C52-4729-AF34-E6E818C814F4}")) CATID_Borders;
struct __declspec(uuid("{C2F1CE64-91D1-4F09-8A61-908BDE837E06}")) CATID_Shadows;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GraphicElementsUIcatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{43B21395-F1E2-11D2-B870-00600802E603}")) CATID_ElementPropertyPages;
struct __declspec(uuid("{43B21396-F1E2-11D2-B870-00600802E603}")) CATID_FrameElementPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// GxCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{5F08CBCA-E91F-11D1-AEE8-080009EC734B}")) CATID_GxCommands;
struct __declspec(uuid("{5F08CBCB-E91F-11D1-AEE8-080009EC734B}")) CATID_GxPalettes;
struct __declspec(uuid("{56C205F9-E53A-11D1-9496-080009EEBECB}")) CATID_GxCommandBars;
struct __declspec(uuid("{65D77504-895C-11D2-AF5D-080009EC734B}")) CATID_GxObjectFactory;
struct __declspec(uuid("{6CB2F1D8-4E9D-11D3-9F52-00C04F6BDF06}")) CATID_GxDatabaseExtensions;
struct __declspec(uuid("{6E208C99-DBD3-11D2-9F2F-00C04F6BC69E}")) CATID_GxEnabledWorkspaceFactories;
struct __declspec(uuid("{6E208C9A-DBD3-11D2-9F2F-00C04F6BC69E}")) CATID_GxRootObjects;
struct __declspec(uuid("{4531C69D-DC07-11D2-9F2F-00C04F6BC69E}")) CATID_GxExtensions;
struct __declspec(uuid("{E72DB9D2-D842-4AA5-9D7F-1B70EA2F0A10}")) CATID_GxExtensionsJIT;
struct __declspec(uuid("{58374DA9-3A52-11D3-9F70-00C04F6BC69E}")) CATID_GxExtensionToolbar;
struct __declspec(uuid("{BB8F3045-1D26-11D3-9F55-00C04F6BC69E}")) CATID_GxObjectFilters;
struct __declspec(uuid("{BB8F3046-1D26-11D3-9F55-00C04F6BC69E}")) CATID_GxDialogObjectFilters;
struct __declspec(uuid("{3EEA2CAF-A730-11D2-AF6D-080009EC734B}")) CATID_GxTabViews;
struct __declspec(uuid("{3EEA2CB0-A730-11D2-AF6D-080009EC734B}")) CATID_GxPreviews;
struct __declspec(uuid("{3EEA2CB1-A730-11D2-AF6D-080009EC734B}")) CATID_GxViews;
struct __declspec(uuid("{25C0E6F0-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxCatalogContextMenuCommands;
struct __declspec(uuid("{25C0E6F1-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxDiskConnectionContextMenuCommands;
struct __declspec(uuid("{25C0E6F2-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxRemoteDatabaseFolderContextMenuCommands;
struct __declspec(uuid("{25C0E6F3-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxSpatialReferencesFolderContextMenuCommands;
struct __declspec(uuid("{25C0E6F4-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFolderContextMenuCommands;
struct __declspec(uuid("{25C0E6F5-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxDatabaseContextMenuCommands;
struct __declspec(uuid("{25C0E6F6-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxRemoteDatabaseContextMenuCommands;
struct __declspec(uuid("{8F4CFA6B-B38E-4E4B-9AB1-E1AFB3CBB569}")) CATID_GxOleDBDatabaseContextMenuCommands;
struct __declspec(uuid("{25C0E6F7-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxDatasetContextMenuCommands;
struct __declspec(uuid("{25C0E6F8-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFeatureDatasetContextMenuCommands;
struct __declspec(uuid("{DF03366D-F30C-490B-A353-B05BAA18A3AF}")) CATID_GxEnterpriseFeatureDatasetContextMenuCommands;
struct __declspec(uuid("{5484E3DE-86FB-489C-8EB1-73EC4A0E4485}")) CATID_GxReadOnlyFeatureDatasetContextMenuCommands;
struct __declspec(uuid("{25C0E6F9-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFeatureClassContextMenuCommands;
struct __declspec(uuid("{22211295-7778-11D3-A00D-00C04F6BC626}")) CATID_GxStandaloneFeatureClassContextMenuCommands;
struct __declspec(uuid("{F4EDFE54-E856-4D72-AEC6-7BD59A3E7B52}")) CATID_GxEnterpriseFeatureClassContextMenuCommands;
struct __declspec(uuid("{9648D913-4475-4165-B746-D2058776F9E8}")) CATID_GxEnterpriseFeatureClassContextMenuCommandsAV;
struct __declspec(uuid("{DABA683A-7888-40BE-8E70-49BC0D4F8C30}")) CATID_GxEnterpriseStandaloneFeatureClassContextMenuCommands;
struct __declspec(uuid("{39C1320B-01A5-4D61-B286-2880337B53C4}")) CATID_GxEnterpriseStandaloneFeatureClassContextMenuCommandsAV;
struct __declspec(uuid("{A44C92BC-79D6-4F89-A0A8-40CDCC279EDC}")) CATID_GxReadOnlyFeatureClassContextMenuCommands;
struct __declspec(uuid("{D1E6735C-4464-4875-8673-59D94A603C3C}")) CATID_GxReadOnlyStandaloneFeatureClassContextMenuCommands;
struct __declspec(uuid("{25C0E6FA-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxTableContextMenuCommands;
struct __declspec(uuid("{44C34C54-E41B-40EF-AC63-8D25A9FC01FA}")) CATID_GxOleDBTableContextMenuCommands;
struct __declspec(uuid("{9B9ACF28-60FE-4ABA-9DC4-5B060A903DF2}")) CATID_GxEnterpriseTableContextMenuCommands;
struct __declspec(uuid("{0273158A-0EA1-4627-B60A-9D3DF568F8F6}")) CATID_GxEnterpriseTableContextMenuCommandsAV;
struct __declspec(uuid("{3BF096DF-B346-46AF-99E2-AFB52ED90F4E}")) CATID_GxReadOnlyTableContextMenuCommands;
struct __declspec(uuid("{6C9CB46D-DCA2-11D2-9F54-00C04F6BC626}")) CATID_GxRelationshipClassContextMenuCommands;
struct __declspec(uuid("{2004CEC9-E2BD-4D2D-8F3F-9E791E7AB106}")) CATID_GxEnterpriseRelationshipClassContextMenuCommands;
struct __declspec(uuid("{25C0E6FB-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxGeometricNetworkContextMenuCommands;
struct __declspec(uuid("{25C0E6FC-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxRasterDatasetContextMenuCommands;
struct __declspec(uuid("{25C0E6FD-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxRasterBandContextMenuCommands;
struct __declspec(uuid("{F2889296-A1EC-4BDF-AEA9-D08D8E0837D9}")) CATID_GxEnterpriseRasterDatasetContextMenuCommands;
struct __declspec(uuid("{16685968-2C9E-45A5-9D47-F2DC62942DDE}")) CATID_GxEnterpriseRasterBandContextMenuCommands;
struct __declspec(uuid("{25C0E6FE-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxGridContextMenuCommands;
struct __declspec(uuid("{25C0E6FF-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxTinContextMenuCommands;
struct __declspec(uuid("{25C0E700-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFileContextMenuCommands;
struct __declspec(uuid("{25C0E701-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxPrjFileContextMenuCommands;
struct __declspec(uuid("{25C0E702-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxLayerContextMenuCommands;
struct __declspec(uuid("{25C0E703-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxMapContextMenuCommands;
struct __declspec(uuid("{F7F3ABF6-FB3C-4E7F-9F38-D45DCDF5F30C}")) CATID_GxPMFMapContextMenuCommands;
struct __declspec(uuid("{3E804E72-8FE3-11D4-AB88-0008C73FD50C}")) CATID_GxSceneContextMenuCommands;
struct __declspec(uuid("{720E21E4-2199-11D6-B2B3-00508BCDDE28}")) CATID_GxGlobeContextMenuCommands;
struct __declspec(uuid("{83EEE9CA-0CB1-11D3-9B35-00C04FA33299}")) CATID_GxCadDataContextMenuCommands;
struct __declspec(uuid("{35DB0ACD-1DAF-11D3-9FAE-00C04F6BC626}")) CATID_GxMultipleSelectionContextMenuCommands;
struct __declspec(uuid("{AB6C1071-13FC-4274-8287-A8AA35A1011A}")) CATID_GxShortcutContextMenuCommands;
struct __declspec(uuid("{E18C85DE-F362-4985-8916-ADBA39A5A50D}")) CATID_GxXMLDocumentContextMenuCommands;
struct __declspec(uuid("{25C0E705-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFolderNewMenuCommands;
struct __declspec(uuid("{1A9A50A4-F123-4CEC-93DC-8AF1CE0CDDA0}")) CATID_GxFolderNewMenuCommandsAV;
struct __declspec(uuid("{25C0E706-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxDatabaseNewMenuCommands;
struct __declspec(uuid("{25C0E707-CD06-11D2-9F40-00C04F6BC626}")) CATID_GxFeatureDatasetNewMenuCommands;
struct __declspec(uuid("{9828BC65-3AD7-11D3-A62F-0008C7D3AE8D}")) CATID_GxSpatialReferencesFolderNewMenuCommands;
struct __declspec(uuid("{7513EB97-D7EE-11D2-9F50-00C04F6BC626}")) CATID_GxDatabaseImportMenuCommands;
struct __declspec(uuid("{B032F215-D4A4-49B0-BDA0-FFFB21320004}")) CATID_GxDatabaseExportMenuCommands;
struct __declspec(uuid("{7513EB99-D7EE-11D2-9F50-00C04F6BC626}")) CATID_GxFeatureDatasetImportMenuCommands;
struct __declspec(uuid("{7513EB9A-D7EE-11D2-9F50-00C04F6BC626}")) CATID_GxFeatureDatasetExportMenuCommands;
struct __declspec(uuid("{7513EB9B-D7EE-11D2-9F50-00C04F6BC626}")) CATID_GxFeatureClassExportMenuCommands;
struct __declspec(uuid("{16FD2B1D-1556-11D3-9FA7-00C04F6BC626}")) CATID_GxTableExportMenuCommands;
struct __declspec(uuid("{20580FBF-2DDE-11D4-9FC8-00C04F6BDF06}")) CATID_GxTableToFeatureClassMenuCommands;
struct __declspec(uuid("{3236816E-9515-4F06-BA58-878010A5285E}")) CATID_GxMultipleSelectionExportMenuCommands;
struct __declspec(uuid("{2044F8C9-D8D7-11D2-99BE-0000F80372B4}")) CATID_GxMapPropertyPages;
struct __declspec(uuid("{C00B1F2C-52D1-404F-8DD5-E3694FD60E00}")) CATID_GxPMFMapPropertyPages;
struct __declspec(uuid("{A72131C2-90FA-11D4-AB88-0008C73FD50C}")) CATID_GxScenePropertyPages;
struct __declspec(uuid("{720E21E3-2199-11D6-B2B3-00508BCDDE28}")) CATID_GxGlobePropertyPages;
struct __declspec(uuid("{BD1DF56D-E644-11D2-99C1-0000F80372B4}")) CATID_GxCatalogPropertyPages;
struct __declspec(uuid("{1236649F-CD2B-11D3-A6F0-0008C7D3AE50}")) CATID_GxSearchEngines;
struct __declspec(uuid("{117623B4-F9D1-11D3-A67F-0008C7DF97B9}")) CATID_GxDockableWindows;
struct __declspec(uuid("{FBFDAC87-FE57-4ABA-B5AA-571C78B6399D}")) CATID_GxFilterFeatureClasses;
struct __declspec(uuid("{5FC6B144-22A8-487F-A208-67C34877F120}")) CATID_GxFilterTables;
struct __declspec(uuid("{3EB92610-DB62-465E-A326-8E0E71C24C20}")) CATID_GxFilterFeatureDatasets;
struct __declspec(uuid("{260A3656-96D0-417B-AC05-3469A444015A}")) CATID_GxExportTableFilters;
struct __declspec(uuid("{593C6231-9B13-4229-A1DF-A7A36F1AE10D}")) CATID_GxArcViewExportTableFilters;
struct __declspec(uuid("{8E415006-F854-4ECB-98C3-EFBD68BAF635}")) CATID_GxExportFeatureClassFilters;
struct __declspec(uuid("{9EB1D578-740B-423E-8CF4-C77A1775A5D6}")) CATID_GxArcViewExportFeatureClassFilters;
struct __declspec(uuid("{C2C372C2-1EB4-4101-9A38-992536A5C0D0}")) CATID_GxLayerFilters;
struct __declspec(uuid("{4B6512F1-6D5A-4A7F-968F-760A01780569}")) CATID_AGSMapPropertyPages;
struct __declspec(uuid("{882BDC69-9C26-419E-BEEF-61C99AD2C6AB}")) CATID_AGSGeocodePropertyPages;
struct __declspec(uuid("{23ACEAA7-F8E0-4325-B5A2-6649260FEE21}")) CATID_GxAGSMapContextMenuCommands;
struct __declspec(uuid("{2C585B5E-F5CA-4020-A45D-149B26359953}")) CATID_GxAGSGlobeContextMenuCommands;
struct __declspec(uuid("{A65CB7D8-E50F-4965-A41D-C7779C73EAD9}")) CATID_GxAGSLocatorContextMenuCommands;
struct __declspec(uuid("{0BA29352-DAF3-49C2-BD4F-D3C32350E955}")) CATID_AGSServerPropertyPages;
struct __declspec(uuid("{4EC5CC19-FA65-49D1-A953-A67BE066C467}")) CATID_GISServersCommands;
struct __declspec(uuid("{CDD15DB8-E364-4A0B-A6E8-2D111CA4E92D}")) CATID_GxRasterCatalogContextMenuCommands;
struct __declspec(uuid("{549B0B62-95CF-4D99-BB69-B18D05DA40A1}")) CATID_GxRasterCatalogItemContextMenuCommands;
struct __declspec(uuid("{699AD2EC-FE3E-493C-9112-4B18E2CEC0D6}")) CATID_GxRasterCatalogViews;
struct __declspec(uuid("{683FB8AE-517B-47BB-9C00-F89015ADAB60}")) CATID_GxRasterCatalogFilters;
struct __declspec(uuid("{45EFCD1F-56BE-4D67-888E-C690F56B4FF8}")) CATID_AGSGeoDataServerPropertyPages;
struct __declspec(uuid("{BA42584B-1EF2-4BE3-B5C7-E7314045B262}")) CATID_GxAGSGeoDataServerContextMenuCommands;
struct __declspec(uuid("{51CD7E6A-7A07-45D5-9C70-694FB2201013}")) CATID_AGSGeoprocessingPropertyPages;
struct __declspec(uuid("{F5E6AD59-1D54-4C1C-9CE0-3D3A2FC12071}")) CATID_GxAGSGeoprocessingContextMenuCommands;
struct __declspec(uuid("{0B383534-8C15-4458-A953-B02575BD1834}")) CATID_AGSGlobeServerPropertyPages;
struct __declspec(uuid("{EF160A6A-E93D-408B-BEC2-176135550BD2}")) CATID_AGSParameterPages;
struct __declspec(uuid("{A585A585-B58B-4560-80E3-87A411859379}")) CATID_AGSSOEParameterPages;
struct __declspec(uuid("{EA8FF01B-8BFC-4FE2-B813-F88A1CADC17D}")) CATID_GxAGSObjects;
struct __declspec(uuid("{6F039D8D-2804-42A1-A0F0-D01CF0D0FE20}")) CATID_GxTerrainContextMenuCommands;
struct __declspec(uuid("{A4101D3C-AC1F-4EF4-A65D-96530A6A1C3C}")) CATID_GxCadastralFabricContextMenuCommands;
struct __declspec(uuid("{DB1269D1-6F21-40CF-B2E8-666628324C8D}")) CATID_GxArchivingMenuCommands;
struct __declspec(uuid("{FAB5D103-6FB5-4185-8817-13C67FE6ACF3}")) CATID_GxAGSFolderContextMenuCommands;
struct __declspec(uuid("{BB787DEF-4CC7-4DC2-A8F1-AD1A93D5BFF9}")) CATID_AGSFolderPropertyPages;
struct __declspec(uuid("{FF24A8D2-3D84-498A-857A-8F1401531932}")) CATID_AGSConnAdminPropertyPages;
struct __declspec(uuid("{BF0BA580-58C6-402C-8E85-A88712E26DEF}")) CATID_AGSConnUserPropertyPages;
struct __declspec(uuid("{A8E0313D-8E7A-44E5-A40A-CDFC594A5860}")) CATID_GxAGSMultiSelContextMenuCommands;
struct __declspec(uuid("{8B1F6601-2A12-46E3-9D3F-A1EE93DE4F9B}")) CATID_GxAGSMultiSelAdminContextMenuCommands;
struct __declspec(uuid("{CC35E6C6-8D16-4F51-BC3E-784E0E4D03E5}")) CATID_AGSImagePropertyPages;
struct __declspec(uuid("{314CE10E-93A6-4F44-A4C2-0E598EF51CED}")) CATID_GxISCDefContextMenuCommands;
struct __declspec(uuid("{AE0FAD19-7F6D-44F3-9AEA-F2EE7CA70E94}")) CATID_WMSConnectionPropertiesPage;
struct __declspec(uuid("{E074D570-B784-43E7-8B57-A3737672CDF4}")) CATID_WCSConnectionPropertiesPage;
struct __declspec(uuid("{CAA46CEC-2324-4968-A492-FEE997B3C7AF}")) CATID_WCSDisconnectedConnectionPropertiesPage;
struct __declspec(uuid("{05B8A7E8-994E-434E-97D9-51FC172C11A6}")) CATID_GxWMSMapPropertiesPage;
struct __declspec(uuid("{FA6CE80E-6322-44CB-82B1-3599DFF7EC61}")) CATID_GxWMSLayerPropertiesPage;
struct __declspec(uuid("{002C8AEC-0188-403D-B55C-07BC0E430C83}")) CATID_GxWCSCoveragePropertiesPage;
struct __declspec(uuid("{A7E52477-92EF-4111-85F8-6A95860934B7}")) CATID_WMSConnectionContextMenu;
struct __declspec(uuid("{A2FC4D55-08B2-485B-AC47-C5C370942218}")) CATID_WCSConnectionContextMenu;
struct __declspec(uuid("{C58809CB-1F58-4E42-BD42-1DEE0741DF0C}")) CATID_WMSMapContextMenu;
struct __declspec(uuid("{0117DC8D-7FE7-403F-BF6A-F4722A391651}")) CATID_WCSCoverageContextMenu;
struct __declspec(uuid("{BE4BF931-0F64-4F5C-B2FA-8C70553995B9}")) CATID_AGSGeometryPropertyPages;
struct __declspec(uuid("{EE7EC99E-8BFD-43D9-81FB-0DC6F24A5B36}")) CATID_GxAGSGeometryContextMenuCommands;
struct __declspec(uuid("{55832158-565A-45C5-9A66-012EA17A70EB}")) CATID_GxAGSImageContextMenuCommands;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{6FD4DE5C-48C0-4EB3-AF95-40B732E05487}")) CATID_GxEnabledWorkspaceFactories;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// HelpCATID.h

struct __declspec(uuid("{04BEAF7C-7D98-4259-8E68-20F9957E2329}")) CATID_HelpMenuCommands;
struct __declspec(uuid("{651063DC-E6DC-4840-9246-98E6F27B2381}")) CATID_TrainingMenuCommands;


// ======================================
// IdentifyCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{997E7AC0-D353-11D2-8CD0-00C04F5B951E}")) CATID_IdentifyObj;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{CB995B86-0F41-4E29-8A0F-7DB4F3F14ADF}")) CATID_IdentifyObj;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// IMSCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{079E9B6C-DA59-44EB-B129-E013139D3812}")) CATID_IMSMetadataServicePropertyPages;
struct __declspec(uuid("{583A720C-FC86-46A1-A6DD-E5C315076BEB}")) CATID_GNEditorPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// LayerCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{34C20001-4D3C-11D0-92D8-00805F7C28B0}")) CATID_LayerFactory;
struct __declspec(uuid("{DC70783B-5CE1-11D0-92DA-00805F7C28B0}")) CATID_LayerPropertySheet;
struct __declspec(uuid("{1476C782-6F57-11D2-A2C6-080009B6F22B}")) CATID_LayerPropertyPages;
struct __declspec(uuid("{F21E3E7B-E3BA-11D2-B868-00600802E603}")) CATID_AreaPatches;
struct __declspec(uuid("{F21E3E7C-E3BA-11D2-B868-00600802E603}")) CATID_LinePatches;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{38012BC1-74DA-4404-907E-D6466467C2D2}")) CATID_AreaPatches;
struct __declspec(uuid("{BA1DC225-5AD4-4825-8D65-3D0F3CA16FC1}")) CATID_LayerFactory;
struct __declspec(uuid("{5D86E8C7-9A0C-41DC-8ED4-0ACB8CE8DDDD}")) CATID_LayerPropertyPages;
struct __declspec(uuid("{AE937A62-6DA0-4845-A9A3-ACE377FB6201}")) CATID_LayerPropertySheet;
struct __declspec(uuid("{764C42C9-DEE5-4D8D-AB0B-6810D1EEC8E0}")) CATID_LinePatches;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// LocationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{E62D6CB4-4AB0-11D3-9F51-00C04F6BDF06}")) CATID_GxLocatorFolderContextMenuCommands;
struct __declspec(uuid("{940C2D60-4AAD-11D3-9F51-00C04F6BDF06}")) CATID_GxLocatorContextMenuCommands;
struct __declspec(uuid("{55EFFA76-622C-11D3-9F60-00C04F8ED1C4}")) CATID_GxLocatorMenus;
struct __declspec(uuid("{DD0E0458-59CD-4289-8E8A-11B28D9B2B9B}")) CATID_LocatorWorkspaces;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{B32E5B93-A367-4DF7-AF57-C4CAF5A012E1}")) CATID_LocatorWorkspaces;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MapCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{4E91E86F-4C86-11D1-880B-080009EC732A}")) CATID_LegendItems;
struct __declspec(uuid("{4E91E870-4C86-11D1-880B-080009EC732A}")) CATID_LegendItemPropSheets;
struct __declspec(uuid("{0C452011-84CB-11D2-AE68-080009EC732A}")) CATID_ContextAnalyzers;
struct __declspec(uuid("{34DC96D1-186D-11D3-B8A3-00600802E603}")) CATID_ScaleBars;
struct __declspec(uuid("{DA7C157D-E58B-11D3-ADEA-00C04FA33A15}")) CATID_StandaloneTablePropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{4F0686D6-8F57-49A2-ABDD-91B00C6E2F22}")) CATID_ContextAnalyzers;
struct __declspec(uuid("{C763139E-07AE-4963-B745-70CAF4C0A56C}")) CATID_LegendItemPropSheets;
struct __declspec(uuid("{45B784DE-C61E-41BF-BC1B-151C6DB99233}")) CATID_LegendItems;
struct __declspec(uuid("{0A90B647-1B59-4FD7-8258-8E2AF51467AB}")) CATID_ScaleBars;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MapElementsCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{8AF09A6C-A0DD-11D2-AE7F-080009EC732A}")) CATID_GridLabels;
struct __declspec(uuid("{8AF09A6E-A0DD-11D2-AE7F-080009EC732A}")) CATID_MapGridBorders;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{11AC91CE-7810-44F8-8398-BD8C8D977E55}")) CATID_GridLabels;
struct __declspec(uuid("{B99295CB-3E11-48C8-9F7A-0C1B8CDF7F10}")) CATID_MapGridBorders;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MaplexCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{20664808-6EC9-11D2-A2C6-080009B6F22B}")) CATID_MaplexAnnotationPlacementPages;
struct __declspec(uuid("{20664808-6EC9-12D2-A3C6-050009B7FA2B}")) CATID_MaplexLabelStylePages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{44F91C83-66E2-40D8-921C-9F421D3C1BCB}")) CATID_MaplexLabelStylePages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MapServerCatIDs.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{4F3A55E3-26DC-4DE0-8D47-B97C7D44F160}")) CATID_LayerDrawingDescriptionFactory;
#else 
struct __declspec(uuid("{9E45E536-C813-4C7F-9417-4104E6D1CC59}")) CATID_LayerDrawingDescriptionFactory;
#endif


// ======================================
// MapUiCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{A0C55AF7-F9D5-11D1-AA8E-000000000000}")) CATID_MapGridFactory;
struct __declspec(uuid("{AE76C8D2-A58A-11D2-A2FE-080009B6F22B}")) CATID_MapPropertyPages;
struct __declspec(uuid("{452A7917-1B8E-11D3-9F92-00C04F6BC78E}")) CATID_MapGridPropertyPages;
struct __declspec(uuid("{56BBC8A1-E583-11D3-9FD8-00C04F6BC78E}")) CATID_AVThemeImporters;
struct __declspec(uuid("{56BBC8A4-E583-11D3-9FD8-00C04F6BC78E}")) CATID_AVFSrcImporters;
struct __declspec(uuid("{7D26C3DF-78CD-4D7C-A96A-FC75CE9F6B7C}")) CATID_NotMaskableLayers;
struct __declspec(uuid("{523318B3-C40C-4D7C-9C6B-34684742BD18}")) CATID_MapScalePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MetadataCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{7AD0DA0A-0D4A-11D3-A626-0008C7D3AE50}")) CATID_MetadataEditor;
struct __declspec(uuid("{5907D721-04C9-11D3-83FF-00C04F8ED211}")) CATID_MetadataEditorPropertyPages;
struct __declspec(uuid("{E5FB4CF1-660C-11D3-A68B-0008C7D3AE50}")) CATID_GxMetadataImporter;
struct __declspec(uuid("{E5FB4CF2-660C-11D3-A68B-0008C7D3AE50}")) CATID_GxMetadataExporter;
struct __declspec(uuid("{13A17004-CA63-46D3-B8CF-031F4C186B3C}")) CATID_SearchResultsContextMenuCommands;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// MxCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{B56A7C42-83D4-11D2-A2E9-080009B6F22B}")) CATID_MxCommands;
struct __declspec(uuid("{B56A7C43-83D4-11D2-A2E9-080009B6F22B}")) CATID_MxViewCommands;
struct __declspec(uuid("{6B1DF87B-DEC8-49B0-884F-345FE2EB1274}")) CATID_MxToolMenuCommands;
struct __declspec(uuid("{F8FC396D-5BA0-44A8-98C4-96C70C5312DE}")) CATID_MxFileMenuCommands;
struct __declspec(uuid("{6F400F1B-1B8F-4469-9581-A0A3826B9FD5}")) CATID_MxFileMenuDefs;
struct __declspec(uuid("{B56A7C44-83D4-11D2-A2E9-080009B6F22B}")) CATID_GeoElementTools;
struct __declspec(uuid("{B56A7C45-83D4-11D2-A2E9-080009B6F22B}")) CATID_MxExtension;
struct __declspec(uuid("{B8C1C6CD-BE34-4EED-BAE9-8584F7A61B07}")) CATID_MxExtensionJIT;
struct __declspec(uuid("{F440A933-565C-447C-8C56-28BB0404E5B9}")) CATID_MxDDECommandHandler;
struct __declspec(uuid("{B56A7C48-83D4-11D2-A2E9-080009B6F22B}")) CATID_MxPalettes;
struct __declspec(uuid("{B56A7C49-83D4-11D2-A2E9-080009B6F22B}")) CATID_DataWindowFactory;
struct __declspec(uuid("{B56A7C4A-83D4-11D2-A2E9-080009B6F22B}")) CATID_MxCommandBars;
struct __declspec(uuid("{DF933391-7A7A-11D2-ACF9-0000F87808EE}")) CATID_PrinterDrivers;
struct __declspec(uuid("{5FDE0991-7B12-11D2-ACF9-0000F87808EE}")) CATID_ExporterDrivers;
struct __declspec(uuid("{66A7ECF7-9BE1-4E77-A8C7-42D3C62A2590}")) CATID_Exports;
struct __declspec(uuid("{8803C8EF-75FE-11D3-A6A6-0008C7D3AE50}")) CATID_MxFinders;
struct __declspec(uuid("{52BB5364-947E-11D2-ACFF-0000F87808EE}")) CATID_ClipboardFormats;
struct __declspec(uuid("{5BF495FA-95D1-11D2-AAEB-00C04FA37D59}")) CATID_TraceTasks;
struct __declspec(uuid("{289C9956-C063-11D2-9F22-00C04F6BC8DD}")) CATID_Pictures;
struct __declspec(uuid("{089874FC-CC18-11D2-9F39-00C04F6BC78E}")) CATID_ContentsViews;
struct __declspec(uuid("{FB8C2199-9D0A-11D3-A645-0008C7DF8DE1}")) CATID_OptionsPropertyPages;
struct __declspec(uuid("{117623B5-F9D1-11D3-A67F-0008C7DF97B9}")) CATID_MxDockableWindows;
struct __declspec(uuid("{9168AC07-5DBE-11D4-A689-0008C7DF88DB}")) CATID_MxDocumentDropTarget;
struct __declspec(uuid("{67713804-1368-4C15-A064-639396316EC8}")) CATID_MxInsetWindowPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{82AF869B-ABA5-4B2C-AAF6-6CDA3E827005}")) CATID_ExporterDrivers;
struct __declspec(uuid("{27812984-A844-43E2-91D7-8D4ECCDEDFD4}")) CATID_Exports;
struct __declspec(uuid("{FCD35CDE-3C0B-4286-BF9E-65419300AA41}")) CATID_MxCommands;
struct __declspec(uuid("{3EBA298A-99A4-49CC-B620-9F35B5523039}")) CATID_MxDockableWindows;
struct __declspec(uuid("{180EE97C-E499-4A51-8061-6BE8515EE242}")) CATID_MxExtension;
struct __declspec(uuid("{CF202E55-C28C-4501-83FD-A4C21E3966C7}")) CATID_MxExtensionJIT;
struct __declspec(uuid("{D4184EB0-4246-480D-A92B-ACEBA23EBF74}")) CATID_MxFinders;
struct __declspec(uuid("{32E0AF24-5DBC-4E04-958C-4AC811812379}")) CATID_Pictures;
struct __declspec(uuid("{A102F20E-B38B-4523-8CFA-A2FF1AC20BD5}")) CATID_PrinterDrivers;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// NameStringParserCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{7BF26B1F-C776-11D2-9F24-00C04F6BC69E}")) CATID_NameStringParser;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{629984A8-5942-4739-92D4-7D1E66C97B7F}")) CATID_NameStringParser;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// NetworkAnalystCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{EAE35861-A806-4100-A148-8E99F6E762B2}")) CATID_NetworkAnalystSolver;
struct __declspec(uuid("{177F3D7A-E9D3-497F-94FA-E23CABCA555E}")) CATID_NetworkAnalystWindowItemCategory;
struct __declspec(uuid("{14A4B9CF-BEFA-475A-BAB2-11403ACF37A6}")) CATID_NetworkAnalystAgent;
struct __declspec(uuid("{37ECC184-D569-4D28-9636-D15A609F01AE}")) CATID_NetworkAnalystWindowCategoryCommand;
struct __declspec(uuid("{595FF015-797F-4C32-A0EC-B20F1ABDB18E}")) CATID_NetworkAnalystWindowItemsCommand;
struct __declspec(uuid("{22DE1F4B-149D-4FC5-8FC3-6BBE5483F083}")) CATID_NetworkAnalystSymbolizer;
struct __declspec(uuid("{53A05670-1E0A-4765-A3D2-30A5051379AB}")) CATID_NetworkAnalystOptionsPropertyPages;
struct __declspec(uuid("{16558225-DCAE-489F-98AE-12119CAFE888}")) CATID_NetworkAnalystLocationOptionsPropertyPages;
struct __declspec(uuid("{86A82C2B-D6B7-466F-8047-C6B232D8577E}")) CATID_NetworkAnalystFinders;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{1A06F360-154A-4E78-B36C-4A879DCCEC25}")) CATID_NetworkAnalystAgent;
struct __declspec(uuid("{5363FC6B-50D8-4434-8455-B1D025722E02}")) CATID_NetworkAnalystOptionsPropertyPages;
struct __declspec(uuid("{6942C43F-2000-44A5-B539-2036903770B9}")) CATID_NetworkAnalystSolver;
struct __declspec(uuid("{3DA26FB4-7675-475A-A9BA-D167D1DEA5D6}")) CATID_NetworkAnalystSymbolizer;
struct __declspec(uuid("{4A709988-5816-4406-9D2B-DE77B33093EF}")) CATID_NetworkAnalystWindowCategoryCommand;
struct __declspec(uuid("{6B8377E1-BD79-435A-B244-2E2FF8D072AC}")) CATID_NetworkAnalystWindowItemCategory;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// NetworkCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{34E1368B-5FC5-45E0-9767-31CB0E7D4714}")) CATID_GxNetworkDatasetContextMenuCommands;
struct __declspec(uuid("{4EFCD3A2-F27F-4F60-953B-74BCB0736514}")) CATID_GxReadOnlyNetworkContextMenuCommands;
struct __declspec(uuid("{013A2176-A747-41CE-BBDF-8DB1434EFB9E}")) CATID_NetworkEvaluatorEditor;
struct __declspec(uuid("{E23FA50B-E545-49C1-9383-66A81D1435DA}")) CATID_NetworkDirectionsPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// NetworkLayerCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{3E7A486C-28C6-47ED-9F9F-AD77F7754D6D}")) CATID_NetworkLayerSymbology;
struct __declspec(uuid("{6625CBA2-FF53-443E-A008-F3043082BA71}")) CATID_NetworkRendererPropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{2D31C431-D156-4214-874C-BDF66438353A}")) CATID_NetworkLayerSymbology;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// OutputCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{CB4F289F-4FA6-4B70-8F57-807C5A60308C}")) CATID_ESRIRasterPrintDrivers;
struct __declspec(uuid("{AE54680B-8099-4A93-8C29-6D727FBCF11A}")) CATID_ESRIExportPropertyDialogs;
struct __declspec(uuid("{93755985-E8DC-403A-BE30-B59A32193142}")) CATID_ESRIExportPropertyPages;
struct __declspec(uuid("{62CB8B33-AB40-4C3F-B3EE-A56EBF044D38}")) CATID_ESRIPrintEnginePropertyDialogs;
struct __declspec(uuid("{32079A2B-1A63-4A0F-A6D8-B5164D1BE269}")) CATID_ESRIRasterPrintDriversPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// PageLayoutCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{D618307B-AA29-11D2-87F2-0000F8751720}")) CATID_GraphicSnapAgents;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{1D9469B1-776C-49E4-BB41-069C35788AD5}")) CATID_GraphicSnapAgents;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// PointObjectsCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{8AAD39CD-4AF3-11D6-9275-00508B48AE82}")) CATID_CustomPointObjects;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// RasterAnalysisCatId.H

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{59CA6922-47FB-11D2-8D29-0000F8780535}")) CATID_RasterAnalysis;
struct __declspec(uuid("{CD568B5A-CA31-11D2-9F3C-00C04F8ED1D7}")) CATID_RasterConversionOp;
struct __declspec(uuid("{EB3F5D30-1306-11D3-9F45-00C04F8ED1D7}")) CATID_RasterTransformationOp;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{E4302386-B210-40E4-807A-93E20C77C7AE}")) CATID_RasterAnalysis;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// RasterUICatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{74F98CC2-E2E7-11D2-9F51-00C04F8ED21A}")) CATID_RasterDatasetPropertyPages;
struct __declspec(uuid("{DC942D39-E3A8-11D2-9F52-00C04F8ED21A}")) CATID_RasterBandPropertyPages;
struct __declspec(uuid("{2AD25BF1-3C02-11D3-A3FA-0004AC1B1D86}")) CATID_RasterLayerPropertyPages;
struct __declspec(uuid("{9A90E0A4-6265-11D3-9FD1-00C04F68E699}")) CATID_RasterDataExclusionPropSheet;
struct __declspec(uuid("{80F65394-FD12-11D2-9F63-00C04F68E699}")) CATID_RasterStatEnvDialog;
struct __declspec(uuid("{837FAC81-38C9-11D4-8D94-00C04F5B87B2}")) CATID_RasterExportMenuCommands;
struct __declspec(uuid("{83D9148B-8E34-47DA-9C54-57436B6493DF}")) CATID_RasterCatalogExportMenuCommands;
struct __declspec(uuid("{A2C4C975-7BD6-45BF-81B2-F46F987CB7D1}")) CATID_RasterDatasetLoadMenuCommands;
struct __declspec(uuid("{291D0CF0-8D47-452C-B6A9-5464C312B91D}")) CATID_RasterCatalogLoadMenuCommands;
struct __declspec(uuid("{8837B6E0-7F9E-11D4-B284-00508BCDC7C8}")) CATID_RasterGxExportFilters;
struct __declspec(uuid("{F38F6DB0-C73E-11D4-B290-00508BCDC7C8}")) CATID_RasterRendererMakers;
struct __declspec(uuid("{7F529451-4743-4C4B-94B4-8140A9C2B4D4}")) CATID_RasterRenderers;
struct __declspec(uuid("{D7A4486F-C20B-4625-8703-08AEFB1D0839}")) CATID_RasterCatalogRendererPickers;
struct __declspec(uuid("{3BCD05ED-97E1-46DF-8034-533C84685EA2}")) CATID_RasterCatalogRenderersPropertyPages;
struct __declspec(uuid("{137D296C-A38F-42DC-A4EC-964B6FD7995E}")) CATID_RasterLayerDataMenuItems;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{AD5A7141-C851-401A-BFA5-57E2982D43CB}")) CATID_RasterCatalogRendererPickers;
struct __declspec(uuid("{DA53B3FF-F09B-40CF-85BF-FE875A016595}")) CATID_RasterGxExportFilters;
struct __declspec(uuid("{C5F4374C-E484-4B6F-BED8-1AC8FE531FE0}")) CATID_RasterRendererMakers;
struct __declspec(uuid("{F3761FAB-CA86-4C7C-BFEF-F8367BB88134}")) CATID_RasterRenderers;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// RendererCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{F5B68AD5-EB4E-11D1-AAB9-00C04FA334B3}")) CATID_ClassificationMethods;
struct __declspec(uuid("{75C2A63E-A98A-11D2-AB27-00C04FA334B3}")) CATID_DataExclusionPropertyPages;
struct __declspec(uuid("{962BD9A9-1EC8-11D3-9F4D-00C04F6BC709}")) CATID_RendererPropertyPages;
struct __declspec(uuid("{5C15FD91-2DB2-11D3-9F52-00C04F6BC709}")) CATID_DataSamplingPropertyPages;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{A8BB55F3-5CD4-434E-93F5-18A6CAB334D8}")) CATID_ClassificationMethods;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ReplicationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{2FB78DC2-0E92-41F5-93ED-475CEACB2693}")) CATID_CheckOutPropertyPages;
struct __declspec(uuid("{41F6E18F-F627-42F4-B5DA-E64A06D613C9}")) CATID_CustomCheckOutPropertyPages;
struct __declspec(uuid("{AFFBB220-DC14-475B-8FD1-F75B5DBAB8B6}")) CATID_MultiGenReplicaPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// RepresentationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{B6BB782B-E479-4D59-B152-51466ADF7D50}")) CATID_MarkerPlacement;
struct __declspec(uuid("{72E05255-883F-441A-B29B-48FE55CF6A61}")) CATID_GeometricEffect;
struct __declspec(uuid("{7E2AFAC6-D6D3-450D-B485-DA47A1921E67}")) CATID_RepresentationClassPropertyPage;
#endif // _ARC_EXPLORER


// ======================================
// ScalarRefCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{E0A5607B-1737-47CB-AA05-C6E447A2FCFB}")) ScalRefID_LengthMillimeter;
struct __declspec(uuid("{8BDA41F9-E913-4B06-90D8-035106C6E05C}")) ScalRefID_LengthCentimeter;
struct __declspec(uuid("{67CBDEC8-152F-414D-B37A-1E9F6B3CCE4C}")) ScalRefID_LengthMeter;
struct __declspec(uuid("{A9265598-E315-44A8-A821-35D5525006BE}")) ScalRefID_LengthKilometer;
struct __declspec(uuid("{676F4E6A-4F85-4F5E-B19E-F85B5E5E765E}")) ScalRefID_LengthUSSurveyFoot;
struct __declspec(uuid("{8EEA9AA2-257A-4899-8A5C-8E19541CFAD1}")) ScalRefID_LengthInch;
struct __declspec(uuid("{9215E272-276F-4A15-84AE-EA1419717727}")) ScalRefID_LengthFoot;
struct __declspec(uuid("{228A0EF8-588C-4E78-801D-659E82326A00}")) ScalRefID_LengthYard;
struct __declspec(uuid("{708B5321-8D61-4725-9252-958625CDBC04}")) ScalRefID_LengthMile;
struct __declspec(uuid("{9E061EC4-64DC-433E-BD4E-FC58DA7108F0}")) ScalRefID_LengthNauticalMile;
struct __declspec(uuid("{62C60329-6C98-423B-B960-6108CDBFB106}")) ScalRefID_LengthRod;
struct __declspec(uuid("{5FD569FC-2B84-40DA-8EFD-6A00D48D0D5F}")) ScalRefID_LengthChain;
struct __declspec(uuid("{76C7C657-5448-4AFA-840C-5CC5E940C719}")) ScalRefID_LengthLink;
struct __declspec(uuid("{A2CF16E9-3E2E-42F9-8A8F-3C5CD572379E}")) ScalRefID_SurveyAngleRadians;
struct __declspec(uuid("{F24DB0DD-2008-47E9-AF26-6F87654066DD}")) ScalRefID_SurveyAngleDegree;
struct __declspec(uuid("{E9A46142-69AC-4FA7-9848-BBC4BA9BAED7}")) ScalRefID_SurveyAngleGon;
struct __declspec(uuid("{8E971731-FF44-4AD1-8223-D119E948FB37}")) ScalRefID_TemperatureCentigrade;
struct __declspec(uuid("{8D94902B-7891-4923-9616-64237847275D}")) ScalRefID_TemperatureFahrenheit;
struct __declspec(uuid("{FFB97D7F-7FA5-4A2C-96B6-870141882471}")) ScalRefID_PressureHectopascal;
struct __declspec(uuid("{67F18F75-2251-4CFE-A30E-B5EBC2FF7183}")) ScalRefID_PressurePascal;
struct __declspec(uuid("{B186895D-D4F5-465D-B83D-45F4248CF551}")) ScalRefID_PressureMillibar;
struct __declspec(uuid("{BB7BE1A2-59B7-4DF1-A5C5-8C58B8E9DC8E}")) ScalRefID_PressureBar;
struct __declspec(uuid("{5439C0AB-DA74-4ACF-99C0-D8764D6E4FD3}")) ScalRefID_PressureMmOfMercury;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SchematicCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{9443C4F2-4838-4FAB-999B-AE12ED2FE7D3}")) CATID_SchematicAlgorithms;
struct __declspec(uuid("{F1C0AFCB-F506-4F25-91B9-23B9D2A1360A}")) CATID_SchematicAlgorithmPages;
struct __declspec(uuid("{F95EF350-3523-4D38-9BF7-D3990189B98C}")) CATID_SchematicAnalysts;
struct __declspec(uuid("{437DC6A3-81DA-4E02-A546-23023BD9A090}")) CATID_SchematicAnalystPages;
struct __declspec(uuid("{E1C4348E-3FCD-4FB6-B80A-875D13259D8F}")) CATID_SchematicBuilders;
struct __declspec(uuid("{98DD81D0-2AFD-4246-AC8D-5CCD261C72CF}")) CATID_SchematicRelationManagers;
struct __declspec(uuid("{A5005F0F-7FB8-40C1-84D9-22323E1225EE}")) CATID_SchematicRules;
struct __declspec(uuid("{AD8CEDB7-A1F8-427A-B598-23FACDF8116C}")) CATID_SchematicRulesExtendedCriteria;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{2AC15922-6FF8-4ACB-9D65-3F2856D60DAE}")) CATID_SchematicAlgorithmPages;
struct __declspec(uuid("{1EC395B3-7760-4D7C-BD8A-E35F05335B68}")) CATID_SchematicAlgorithms;
struct __declspec(uuid("{2347BF48-4FB6-4188-83FA-5B2B1C0F8653}")) CATID_SchematicAnalystPages;
struct __declspec(uuid("{57249870-7F82-4474-AE82-58E5E23DF123}")) CATID_SchematicAnalysts;
struct __declspec(uuid("{DC0E08E5-76C3-43ED-862D-E8A447ABA6FF}")) CATID_SchematicBuilders;
struct __declspec(uuid("{D0A19ABC-A8E8-4F93-9E84-9C30F4FF2F0A}")) CATID_SchematicNodeReductionExtended;
struct __declspec(uuid("{16C07E14-EBD7-4535-A21F-13A54CF0B71D}")) CATID_SchematicRelationManagers;
struct __declspec(uuid("{708CE05E-8530-4E81-A1B2-06234E4A8A4A}")) CATID_SchematicRules;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SchematicUICatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{2EB82C6E-B130-43EA-9444-7262237D2615}")) CATID_SchematicOptionsPropertyPages;
struct __declspec(uuid("{EEBAAE14-3DC1-41EE-A369-10F23C931254}")) CATID_SchematicToolsEdit;
struct __declspec(uuid("{ED59A387-C431-4F45-938F-E7930E20A735}")) CATID_SchematicEditingOptionsPropertyPages;
struct __declspec(uuid("{3CEEA4C3-3E09-4867-9BA3-CC6482D7F186}")) CATID_SchematicCreateDiagramDialog;
struct __declspec(uuid("{AF04CE4A-FF08-43EB-9FB7-4A25452EFA53}")) CATID_SchematicRulePropertyPages;
struct __declspec(uuid("{F3756085-8657-49EC-906D-ECB7CD0920A4}")) CATID_GxSchematicDatasetContextMenuCommands;
struct __declspec(uuid("{9D65F80B-FA2A-4093-A259-59FDEFE78068}")) CATID_GxSchematicFolderContextMenuCommands;
struct __declspec(uuid("{3B1FD8BD-FF79-4CE3-B0B2-83F2319BDE52}")) CATID_GxSchematicDiagramContextMenuCommands;
struct __declspec(uuid("{A16670E7-25F8-4C08-BFEB-33501DFEF120}")) CATID_GxSchematicDatasetNewMenuCommands;
struct __declspec(uuid("{AF648EAA-F94A-4307-928B-C4DC2B7555C7}")) CATID_GxSchematicDatasetExportMenuCommands;
struct __declspec(uuid("{0BCA803D-BCF6-49D1-9749-2157D083CC52}")) CATID_GxSchematicFolderNewMenuCommands;
struct __declspec(uuid("{B4D766C4-2D90-44FA-A7D0-DD72B288D966}")) CATID_GxSchematicDiagramExportMenuCommands;
struct __declspec(uuid("{344C293D-545A-4B83-8B55-BA10997C3E49}")) CATID_SchematicDatasetPropertyPages;
struct __declspec(uuid("{3833B834-3D58-4727-B395-07F83D615119}")) CATID_SchematicFolderPropertyPages;
struct __declspec(uuid("{8BE0C151-4BEE-45BF-8E98-76FD48B8FAF9}")) CATID_SchematicDiagramPropertyPages;
struct __declspec(uuid("{3DD691AF-9F04-498C-9470-484679B343B6}")) CATID_SchematicBuilderUI;
struct __declspec(uuid("{8877568E-4C6F-4F54-8035-7C1E0162BC92}")) CATID_SchematicBuilderPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SDCCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{95BCD5A1-8C27-4ACE-9675-BFF5391CE339}")) CATID_GxSDCFeatureClassExportMenuCommands;
struct __declspec(uuid("{291B2148-0495-43AC-9108-F9891917A0D1}")) CATID_GxSDCTableExportMenuCommands;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ShapefileCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{E10D6EC0-06E6-11D3-9F87-00C04F6BC626}")) CATID_GxShapefileFeatureClassContextMenuCommands;
struct __declspec(uuid("{E10D6EC1-06E6-11D3-9F87-00C04F6BC626}")) CATID_GxShapefileTableContextMenuCommands;
struct __declspec(uuid("{E10D6EC2-06E6-11D3-9F87-00C04F6BC626}")) CATID_GxShapefileFeatureClassExportMenuCommands;
struct __declspec(uuid("{E10D6EC3-06E6-11D3-9F87-00C04F6BC626}")) CATID_GxShapefileTableExportMenuCommands;
struct __declspec(uuid("{124C8C26-301B-11D4-9FC8-00C04F6BDF06}")) CATID_GxShapefileTableToFeatureClassMenuCommands;
struct __declspec(uuid("{E10D6EC4-06E6-11D3-9F87-00C04F6BC626}")) CATID_ShapefileFeatureClassPropertyPages;
struct __declspec(uuid("{E10D6EC5-06E6-11D3-9F87-00C04F6BC626}")) CATID_ShapefileTablePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SMCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{EF3B2EBD-B87D-4B8D-AD63-DE1F2C4B73C8}")) CATID_SMFinders;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SpatialAnalystCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{BA648A2A-B79E-433C-999A-AA3C7B075E17}")) CATID_SAExtensions;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SpatialAnalystUICatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{A7386B01-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBGeoDatasetProp;
struct __declspec(uuid("{A7386B02-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBLayerProp;
struct __declspec(uuid("{A7386B03-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBDerivedGeoDatasetProp;
struct __declspec(uuid("{A7386B04-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBTableProp;
struct __declspec(uuid("{A7386B05-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBGeoOperationProp;
struct __declspec(uuid("{A7386B06-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBMethodProp;
struct __declspec(uuid("{A7386B07-775E-11D3-9F54-00C04F8ED1D7}")) CATID_MBProcessProp;
struct __declspec(uuid("{FAF0CFBB-CD00-11D3-A051-00C04F68E699}")) CATID_SAOperation;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SunsetCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{D9246646-BEDB-4D2B-88B0-5B94D1BBD5A7}")) CATID_TransformationMethods;
struct __declspec(uuid("{3E15409F-572B-47DE-91C3-7F310CE04F5B}")) CATID_AdjustmentPropertyPages;
struct __declspec(uuid("{0772EAEC-F5B4-4F2C-BFE8-019861BD3A43}")) CATID_AdjustmentMethodPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SxCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{A51B87D1-A383-11D3-8206-0080C7597E71}")) CATID_SxPalettes;
struct __declspec(uuid("{F27D8291-A383-11D3-8206-0080C7597E71}")) CATID_SxCommandBars;
struct __declspec(uuid("{F27D8292-A383-11D3-8206-0080C7597E71}")) CATID_SxCommands;
struct __declspec(uuid("{5A10D191-A385-11D3-8206-0080C7597E71}")) CATID_SxRootObjects;
struct __declspec(uuid("{369448D7-A6BD-11D3-ABB8-0008C73FCA1C}")) CATID_SxExtensions;
struct __declspec(uuid("{836D800D-71B7-489E-A2F8-AEE3D77B06D7}")) CATID_SxExtensionsJIT;
struct __declspec(uuid("{BB07DB51-E57B-11D3-9F74-00C04F6BC619}")) CATID_SxContentsViews;
struct __declspec(uuid("{B9789374-FADC-11D3-A67F-0008C7DF97B9}")) CATID_SxDockableWindows;
struct __declspec(uuid("{3BB42A1D-05A0-11D4-9F79-00C04F6BC619}")) CATID_SxContextAnalyzers;
struct __declspec(uuid("{CF228351-10A9-11D4-9F7F-00C04F6BC619}")) CATID_ScenePropertyPages;
struct __declspec(uuid("{3F82C99B-1C5F-11D4-A381-00C04F6BC619}")) CATID_SxLayerPropertyPages;
struct __declspec(uuid("{779E31F8-25E1-11D4-9B80-00C04FA33299}")) CATID_SxPropertyPages;
struct __declspec(uuid("{B3E00B2A-25D3-11D4-A383-00C04F6BC619}")) CATID_SxFinders;
struct __declspec(uuid("{F58B83FF-31AE-11D4-A385-00C04F6BC619}")) CATID_SxOptionsPropertyPages;
struct __declspec(uuid("{D6AC48F8-37F4-11D4-A168-444553547777}")) CATID_SceneExporter3dDrivers;
struct __declspec(uuid("{D6AC48FC-37F4-11D4-A168-444553547777}")) CATID_SceneExporter3dPropertyPages;
struct __declspec(uuid("{4251BA09-9106-11D5-B29F-00508BCDDE28}")) CATID_SceneExporterVideoDrivers;
struct __declspec(uuid("{4251BA0A-9106-11D5-B29F-00508BCDDE28}")) CATID_SceneExporterVideoPropertyPages;
struct __declspec(uuid("{5980E69C-A95E-11D5-B2A0-00508BCDDE28}")) CATID_DDDAnimationTypes;
struct __declspec(uuid("{A9521B7F-1F1E-11D6-A12D-00508BD60CB9}")) CATID_SxGraphicPropertyPages;
struct __declspec(uuid("{980BC11D-BE90-4837-8123-18BCEC4D2096}")) CATID_SxImport3DFile;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{A6EAD5DE-89AB-485B-A73A-1B4C04BE84E9}")) CATID_DDDAnimationTypes;
struct __declspec(uuid("{C737852C-8FCF-451D-B1BB-4C0778FFBF44}")) CATID_SceneExporter3dDrivers;
struct __declspec(uuid("{51DD41E0-E1D0-429A-B5EE-72D209E1083A}")) CATID_SceneExporterVideoDrivers;
struct __declspec(uuid("{B433EFDE-3478-4203-AB5B-B0338F0F9280}")) CATID_SxImport3DFile;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SymbolCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{5424FB00-5713-11D2-97E5-0080C7E04196}")) CATID_LineSymbol;
struct __declspec(uuid("{5424FB01-5713-11D2-97E5-0080C7E04196}")) CATID_MarkerSymbol;
struct __declspec(uuid("{5424FB02-5713-11D2-97E5-0080C7E04196}")) CATID_FillSymbol;
struct __declspec(uuid("{5424FB03-5713-11D2-97E5-0080C7E04196}")) CATID_TextSymbol;
struct __declspec(uuid("{F8AEACE0-25D1-11D3-80DA-0080C79F0371}")) CATID_TextBackground;
struct __declspec(uuid("{5673B810-2B1F-11D3-80E5-0080C79F0371}")) CATID_LineDecorationElement;
struct __declspec(uuid("{AC0E982B-91CB-11D1-8813-080009EC732A}")) CATID_StyleGalleryClasses;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{8250D580-C8A1-4E6D-B35F-3DCF57E107F2}")) CATID_FillSymbol;
struct __declspec(uuid("{6CBFEFF4-81D8-43D5-8163-4D2AB66EEBDD}")) CATID_LineDecorationElement;
struct __declspec(uuid("{DEE58C91-48A6-412C-8279-823B8E3BA7E1}")) CATID_LineSymbol;
struct __declspec(uuid("{C3E58159-9CB0-49DE-A620-D08B3CABA716}")) CATID_MarkerSymbol;
struct __declspec(uuid("{A09E1D65-182C-4E84-AD15-C740DBFC10DB}")) CATID_StyleGalleryClasses;
struct __declspec(uuid("{5AAD20B3-0813-4B46-A1A0-8D3E4B938614}")) CATID_TextBackground;
struct __declspec(uuid("{AC7192B6-189F-4A0E-84DE-5836D8E90CC9}")) CATID_TextSymbol;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SymbologyUICatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{818B37C0-F34E-11D2-BC8F-0080C7E04196}")) CATID_SymbolPropertyPages;
struct __declspec(uuid("{F1CAF8B0-25C3-11D3-80DA-0080C79F0371}")) CATID_TextBackgroundPropertyPages;
struct __declspec(uuid("{9C275BE0-2A66-11D3-80E3-0080C79F0371}")) CATID_LegendSymbolEditors;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// SystemUtilityCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{D25CC5EB-97E5-456C-88D2-66849B9C42CE}")) CATID_ESRIDeveloperKitLibraryHandlingExtensions;
#endif


// ======================================
// TableCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{2D264034-4A12-440C-A00D-8C229AACD2E7}")) CATID_TableFactory;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{C2D65426-8F35-4E8A-92A0-98BE63E0E998}")) CATID_TableFactory;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// TableWindowCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{DA51F911-EA46-4E57-9B9E-2CF443D34CAB}")) CATID_TableWindowPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// TextFileCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{090BE115-10AB-11D4-AE05-00C04FA33A15}")) CATID_TextFilePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// TinCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{2A3354C9-24E1-11D3-9F4C-00C04F6BC619}")) CATID_TinDatasetPropertyPages;
struct __declspec(uuid("{19283BDF-656F-11D3-9F57-00C04F6BC619}")) CATID_TinRendererPropertyPages;
struct __declspec(uuid("{0F2D0B33-8ABE-44F5-86DA-B134E22B0BB5}")) CATID_TerrainRendererPropertyPages;
struct __declspec(uuid("{A1523ADD-FB91-11D4-80FC-00C04FA0ADF8}")) CATID_3DExtensions;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{92135F35-022A-4FEE-AA55-C2A2623FC703}")) CATID_3DExtensions;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// TitusCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{C7567B1B-A072-4FFC-AD9C-A1C9F66DC54D}")) CATID_FeatureLargerThanToleranceErrorCommands;
struct __declspec(uuid("{697D68A5-8FB3-41B2-AF2C-F74405783AE8}")) CATID_AreaOverlapErrorCommands;
struct __declspec(uuid("{88011378-E9FE-4F21-A5FE-209C49EEB4DF}")) CATID_LineOverlapErrorCommands;
struct __declspec(uuid("{D98A1992-623A-49B6-9DB3-6CEC4BD1A49C}")) CATID_LineDangleErrorCommands;
struct __declspec(uuid("{1C65B1FA-2CAE-4850-81C8-F4B119B738B2}")) CATID_LinePseudoErrorCommands;
struct __declspec(uuid("{B4728E0C-1E64-4504-826C-F39DF8A3123F}")) CATID_AreaGapErrorCommands;
struct __declspec(uuid("{DE141B42-A4F1-4D8B-8F39-7126E2F5216D}")) CATID_AreaCoveredByAreaErrorCommands;
struct __declspec(uuid("{C934A77D-F1ED-4638-848A-121CB3841BC4}")) CATID_AreaBoundaryCoveredByAreaBoundaryErrorCommands;
struct __declspec(uuid("{B8C9D62F-CCA4-4AD6-B7F9-08CBCAA265FD}")) CATID_AreaCoverErrorCommands;
struct __declspec(uuid("{F90C3728-7DB1-4158-8CBB-A362F7157C81}")) CATID_AreaTessellateErrorCommands;
struct __declspec(uuid("{24752620-351E-44B2-908F-22BC1969E6F0}")) CATID_AreaContainsPointErrorCommands;
struct __declspec(uuid("{FFD26B46-C52E-4816-8756-4CDEEBC6EC58}")) CATID_PointInsideAreaErrorCommands;
struct __declspec(uuid("{94822460-BACD-493C-9398-9BD9EA7D8FC7}")) CATID_LineIntersectionErrorCommands;
struct __declspec(uuid("{58B3DD4C-8B9F-4CB7-B997-90AA4DF3989D}")) CATID_LineIntersectionInteriorTouchErrorCommands;
struct __declspec(uuid("{CE81C0A2-0A70-4F2C-9096-8E9DCB753400}")) CATID_LineSelfOverlapErrorCommands;
struct __declspec(uuid("{E71D7DB1-84AD-4C58-9AC1-FD440BF190C5}")) CATID_LineSelfIntersectErrorCommands;
struct __declspec(uuid("{464DA432-E5F1-47B3-A3BA-5981F0AAA4AA}")) CATID_LineMultipartErrorCommands;
struct __declspec(uuid("{3B882828-5F84-4AE1-9F46-9BBF8E877679}")) CATID_LineCoveredByLineClassErrorCommands;
struct __declspec(uuid("{22CB4C7D-0ED3-4BE1-9A56-1B1D65EA0B50}")) CATID_EndpointCoveredByPointErrorCommands;
struct __declspec(uuid("{08B33C03-50D6-4C54-8EF8-E2F8A0D2C21D}")) CATID_PointCoveredByEndpointErrorCommands;
struct __declspec(uuid("{0D0B210D-ED73-4A45-A60D-D34D45776777}")) CATID_PointCoveredByLineErrorCommands;
struct __declspec(uuid("{2AC04BF5-48A2-4D7C-A695-103198CB8133}")) CATID_PointCoveredByAreaBoundaryErrorCommands;
struct __declspec(uuid("{78CEB2AE-E575-4A37-A067-478711A85D15}")) CATID_BoundaryCoincidenceErrorCommands;
struct __declspec(uuid("{1C766272-65BB-4F6E-93A5-3F196F5BA59C}")) CATID_BoundaryCoverErrorCommands;
struct __declspec(uuid("{0484A5EC-4701-4B65-A097-A991D931C4CC}")) CATID_GxTopologyContextMenuCommands;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// ToolboxCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{B5E9A20C-0D77-11D4-9FE0-00C04F6BC61D}")) CATID_ArcToolboxTools;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// TPSObjectsCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{CA711F12-F48A-11D4-BAC0-106938000000}")) CATID_CustomTPSObjects;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// UOMFormatCATID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{95EC97C6-B588-4F54-BE84-259CBE434EE9}")) UOMFmtCATID_Length;
struct __declspec(uuid("{E7E74855-9826-4830-ABE3-434FDB22ABA3}")) UOMFmtCATID_Angle;
struct __declspec(uuid("{1DAD2395-284D-4C52-92D5-79ED02374545}")) UOMFmtCATID_Direction;
struct __declspec(uuid("{F5491894-A98F-43E4-ADAA-D20C972D1A57}")) UOMFmtCATID_Temperature;
struct __declspec(uuid("{CF093407-E332-4890-9D0E-1F9A0B182F6E}")) UOMFmtCATID_Pressure;
struct __declspec(uuid("{84114549-D597-46FF-A480-A22F8ADB91E2}")) UOMFmtCATID_PCS;
struct __declspec(uuid("{C9A880E0-9402-4E31-A7AB-E81743980896}")) UOMFmtCATID_GCS;
struct __declspec(uuid("{09DFDB07-5875-4DD0-B04D-ADF852CAE3A4}")) UOMFmtCATID_Height;
struct __declspec(uuid("{A8BA983D-C7A3-4914-9E76-7299B70ACDFD}")) UOMFmtCATID_Coordinate;
struct __declspec(uuid("{7FFF8B34-01D6-4B5A-B921-87FCE26C9542}")) UOMFmtCATID_LengthMeter;
struct __declspec(uuid("{08845488-4190-4475-9EB1-5C2767D05435}")) UOMFmtCATID_LengthKilometer;
struct __declspec(uuid("{D5882933-A89E-47BF-90F9-00014587125A}")) UOMFmtCATID_LengthFoot;
struct __declspec(uuid("{BE72B3F4-03DD-4644-8DBB-C98C4F6A3FBA}")) UOMFmtCATID_LengthUSFoot;
struct __declspec(uuid("{6A163438-2410-4E08-B4E6-CD0BAC00C3D0}")) UOMFmtCATID_LengthMile;
struct __declspec(uuid("{921E0A03-B416-4C28-A5C1-3FCBBBAA834F}")) UOMFmtCATID_LengthRod;
struct __declspec(uuid("{5BC720E1-1885-4B63-BB67-1A01D3B16995}")) UOMFmtCATID_LengthChain;
struct __declspec(uuid("{5D202D11-4B5D-497D-A9BE-599C2225E553}")) UOMFmtCATID_LengthLink;
struct __declspec(uuid("{877EBBEF-8D0C-4A8B-8C08-72C0023E4BCF}")) UOMFmtCATID_AngleDegMinSec;
struct __declspec(uuid("{5B6BE14D-CB13-48EC-BBA4-6B4BEE37B262}")) UOMFmtCATID_AngleDeg;
struct __declspec(uuid("{FFE99C14-C855-42D2-9550-3905A3CAFF10}")) UOMFmtCATID_AngleGon;
struct __declspec(uuid("{EFBACF5B-8D24-4088-AABD-06C3933F9AC8}")) UOMFmtCATID_DirectionQuadBearing;
struct __declspec(uuid("{6177E5BA-7C69-4D4B-850F-D6AE2C00E88A}")) UOMFmtCATID_DirectionDegMinSec;
struct __declspec(uuid("{7C595811-B772-4A68-A209-94FEC4952B3E}")) UOMFmtCATID_DirectionDeg;
struct __declspec(uuid("{4701D5BE-1121-49BA-8C8C-BB669AEB861C}")) UOMFmtCATID_DirectionGon;
struct __declspec(uuid("{EA6AF470-A7F1-45C5-8C6A-CD29075D2599}")) UOMFmtCATID_TemperatureCentigrade;
struct __declspec(uuid("{FE77AB6C-F310-4AF5-94DD-4DB54477B015}")) UOMFmtCATID_TemperatureFahrenheit;
struct __declspec(uuid("{B9218458-7CBC-43BF-B1FA-B23F39AF05B1}")) UOMFmtCATID_PressureMillibar;
struct __declspec(uuid("{8665D943-51FC-47D6-8E66-EAA23B16D965}")) UOMFmtCATID_PressureHectopascal;
struct __declspec(uuid("{DE7F95D1-C680-422C-B655-3F955E631F19}")) UOMFmtCATID_PCSMeter;
struct __declspec(uuid("{A39278FB-90EE-43C7-B306-B3189B94888B}")) UOMFmtCATID_PCSFoot;
struct __declspec(uuid("{9EC38F82-0C10-42ED-8462-676E122D1252}")) UOMFmtCATID_PCSUSFoot;
struct __declspec(uuid("{1F6D36E9-4E3A-498A-9B52-1C53D6E8E3F3}")) UOMFmtCATID_GCSDegMinSec;
struct __declspec(uuid("{99B30609-BD48-4E34-BBF0-F1DEF9E22B57}")) UOMFmtCATID_HeightMeter;
struct __declspec(uuid("{3AF86E44-EA7C-41CF-8463-7F04E9C5FAB9}")) UOMFmtCATID_HeightFoot;
struct __declspec(uuid("{D4A35D67-1655-42E9-A40A-D63EAE906486}")) UOMFmtCATID_HeightUSFoot;
struct __declspec(uuid("{AA23E23D-B6B4-47F0-88C6-C6F722E106BF}")) UOMFmtCATID_HeightRod;
struct __declspec(uuid("{E55101CD-A615-44AB-891B-ABF3A9DC6987}")) UOMFmtCATID_HeightChain;
struct __declspec(uuid("{9FAA38B0-5572-4DD0-947C-EE885F29B068}")) UOMFmtCATID_HeightLink;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// UtilityNetworkCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{39DC1B4F-BE34-11D2-BABE-00C04FA33C20}")) CATID_UtilityNetworkTasks;
struct __declspec(uuid("{97499635-F279-11D2-9F6A-00C04F6BDF0E}")) CATID_UtilityNetworkAnalysisPropertyPages;
struct __declspec(uuid("{69BCACD9-019C-11D3-9F7D-00C04F6BDF0E}")) CATID_UtilityNetworkAnalysisGNPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// VectorizationCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{CC36327A-FB36-4318-8E92-A6A41B8C2763}")) CATID_VectorizationPropertyPages;
struct __declspec(uuid("{03013C0E-CC51-4247-A90D-0621B508E55F}")) CATID_RasterSnappingPropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// VpfCatid.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{832A7CA1-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfCoverageContextMenuCommands;
struct __declspec(uuid("{832A7CA2-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfFeatureClassContextMenuCommands;
struct __declspec(uuid("{1CB448E4-F485-11D3-9B56-00C04FA33299}")) CATID_GxVpfTableContextMenuCommands;
struct __declspec(uuid("{832A7CA3-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfCoverageExportMenuCommands;
struct __declspec(uuid("{832A7CA4-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfFeatureClassExportMenuCommands;
struct __declspec(uuid("{1CB448E5-F485-11D3-9B56-00C04FA33299}")) CATID_GxVpfTableExportMenuCommands;
struct __declspec(uuid("{832A7CA5-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfCoveragePropertyPages;
struct __declspec(uuid("{832A7CA6-F47F-11D3-9B56-00C04FA33299}")) CATID_GxVpfFeatureClassPropertyPages;
struct __declspec(uuid("{1CB448E6-F485-11D3-9B56-00C04FA33299}")) CATID_GxVpfTablePropertyPages;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// WorkspaceFactoryCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{07BC056E-DB8A-11D1-AA81-00C04FA33A15}")) CATID_WorkspaceFactory;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{79351701-B111-4F35-ACBC-1A21543A4412}")) CATID_WorkspaceFactory;
#endif // #ifndef _ARC_EXPLORER


// ======================================
// WorkspaceFactoryHelpersCatID.h

#ifndef _ARC_EXPLORER
struct __declspec(uuid("{6871A79C-CD65-46F5-A7BB-88F97D0E2CDC}")) CATID_PlugInWorkspaceFactoryHelpers;
#else // #ifndef _ARC_EXPLORER
struct __declspec(uuid("{7914CA15-FB06-451B-A8E5-35A386082D2B}")) CATID_PlugInWorkspaceFactoryHelpers;
#endif // #ifndef _ARC_EXPLORER
