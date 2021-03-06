
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGInlineGalleryDataSource.h>

@protocol IGInlineGalleryDataSourceDelegate, OS_dispatch_queue;
@class NSObject, ALAssetsLibrary, ALAssetsGroup, NSArray;

@interface IGInlineGalleryALDataSource : NSObject <IGInlineGalleryDataSource> {

	id<IGInlineGalleryDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	int _maxItems;
	ALAssetsLibrary* _assetsLibrary;
	ALAssetsGroup* _savedPhotosGroup;
	NSArray* _assets;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int maxItems;                                                       //@synthesize maxItems=_maxItems - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                                    //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) ALAssetsGroup * savedPhotosGroup;                                   //@synthesize savedPhotosGroup=_savedPhotosGroup - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                   //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) id<IGInlineGalleryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)startDataFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)decorateGridCell:(id)arg1 forAssetAtIndexPath:(id)arg2 ;
-(id)assetForIndexPath:(id)arg1 ;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(void)filterAssetsGroup:(id)arg1 ;
-(void)refreshAssetGroup:(id)arg1 ;
-(id)initWithMaxItems:(int)arg1 ;
-(char)hasCameraRollAccess;
-(void)pauseDataFetch;
-(id)errorMessageIfInvalidAssetAtIndexPath:(id)arg1 ;
-(id)metadataForAssetAtIndexPath:(id)arg1 ;
-(void)assignDefaultPhotoGroupWithCompletion:(/*^block*/id)arg1 ;
-(ALAssetsGroup *)savedPhotosGroup;
-(id)extractAssetsForGroup:(id)arg1 ;
-(void)setSavedPhotosGroup:(ALAssetsGroup *)arg1 ;
-(int)maxItems;
-(int)numMediaSince:(double)arg1 ;
-(void)setMaxItems:(int)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)setDelegate:(id<IGInlineGalleryDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<IGInlineGalleryDataSourceDelegate>)delegate;
-(int)numberOfItems;
@end

