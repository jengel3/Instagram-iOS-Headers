

@class NSMutableArray, NSMutableDictionary;

@interface IGCameraRoll : NSObject {

	int _initializationStatus;
	NSMutableArray* _initializationBlocks;
	NSMutableDictionary* _assetGroupMap;

}

@property (assign,nonatomic) int initializationStatus;                           //@synthesize initializationStatus=_initializationStatus - In the implementation block
@property (nonatomic,retain) NSMutableArray * initializationBlocks;              //@synthesize initializationBlocks=_initializationBlocks - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetGroupMap;                //@synthesize assetGroupMap=_assetGroupMap - In the implementation block
+(id)assetsLibrary;
+(int)status;
+(id)sharedCameraRoll;
-(id)mostRecentAssetOfType:(int)arg1 ;
-(id)fullScreenImageForAsset:(id)arg1 ;
-(NSMutableDictionary *)assetGroupMap;
-(int)initializationStatus;
-(NSMutableArray *)initializationBlocks;
-(void)setInitializationStatus:(int)arg1 ;
-(void)setInitializationBlocks:(NSMutableArray *)arg1 ;
-(void)doInitializeLibraryWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)onAssetsLibraryChanged:(id)arg1 ;
-(void)setAssetGroupMap:(NSMutableDictionary *)arg1 ;
-(void)handleDeletedAssetGroups:(id)arg1 ;
-(void)handleUpdatedAssetGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleInsertedAssetGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)allAssetGroups;
-(id)sortedAssetGroupsForAssetType:(int)arg1 ;
-(void)initializeLibrary:(char)arg1 withReadyBlock:(/*^block*/id)arg2 ;
-(id)defaultAssetGroup;
-(id)assetGroupForUniqueID:(id)arg1 ;
-(id)fullSizeImageForAsset:(id)arg1 ;
-(char)hasMediaOfType:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

