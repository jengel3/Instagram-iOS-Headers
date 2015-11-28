

@class ALAssetsGroup, PHAssetCollection, NSArray, NSString, UIImage;

@interface IGAssetGroup : NSObject {

	ALAssetsGroup* _group;
	PHAssetCollection* _collection;
	NSArray* _allAssets;
	NSArray* _photos;
	NSArray* _videos;

}

@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) unsigned groupType; 
@property (nonatomic,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) NSString * name; 
-(id)assetsOfType:(int)arg1 ;
-(id)initWithAssetGroup:(id)arg1 ;
-(void)loadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(int)assetCountForType:(int)arg1 ;
-(unsigned)groupType;
-(UIImage *)posterImage;
-(NSString *)name;
-(NSString *)uniqueID;
-(id)initWithAssetCollection:(id)arg1 ;
@end

