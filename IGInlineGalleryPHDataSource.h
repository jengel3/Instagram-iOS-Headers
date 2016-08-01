
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <Instagram/IGInlineGalleryDataSource.h>

@protocol IGInlineGalleryDataSourceDelegate, OS_dispatch_queue;
@class NSObject, PHFetchResult, PHAssetCollection, PHCachingImageManager, PHImageRequestOptions, PHFetchOptions, NSString;

@interface IGInlineGalleryPHDataSource : NSObject <PHPhotoLibraryChangeObserver, IGInlineGalleryDataSource> {

	id<IGInlineGalleryDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	int _maxItems;
	PHFetchResult* _fetchCollectionsResult;
	PHAssetCollection* _chosenCollection;
	PHFetchResult* _assetsInCollectionResult;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	PHFetchOptions* _fetchOptions;
	CGSize _thumbnailSize;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int maxItems;                                                       //@synthesize maxItems=_maxItems - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                               //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) PHFetchResult * fetchCollectionsResult;                             //@synthesize fetchCollectionsResult=_fetchCollectionsResult - In the implementation block
@property (nonatomic,retain) PHAssetCollection * chosenCollection;                               //@synthesize chosenCollection=_chosenCollection - In the implementation block
@property (nonatomic,retain) PHFetchResult * assetsInCollectionResult;                           //@synthesize assetsInCollectionResult=_assetsInCollectionResult - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                               //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;                        //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,readonly) PHFetchOptions * fetchOptions;                                    //@synthesize fetchOptions=_fetchOptions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInlineGalleryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)dataSourceWithItemsSinceDate:(id)arg1 ;
+(id)dataSourceWithMaxItems:(int)arg1 ;
-(void)startDataFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)decorateGridCell:(id)arg1 forAssetAtIndexPath:(id)arg2 ;
-(id)assetForIndexPath:(id)arg1 ;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)imageRequestOptions;
-(char)hasCameraRollAccess;
-(void)pauseDataFetch;
-(id)errorMessageIfInvalidAssetAtIndexPath:(id)arg1 ;
-(id)metadataForAssetAtIndexPath:(id)arg1 ;
-(int)maxItems;
-(int)numMediaSince:(double)arg1 ;
-(void)setMaxItems:(int)arg1 ;
-(id)initWithFetchOptions:(id)arg1 ;
-(void)assignDefaultAlbum:(/*^block*/id)arg1 ;
-(PHFetchResult *)fetchCollectionsResult;
-(void)setFetchCollectionsResult:(PHFetchResult *)arg1 ;
-(PHAssetCollection *)chosenCollection;
-(PHFetchResult *)assetsInCollectionResult;
-(void)setAssetsInCollectionResult:(PHFetchResult *)arg1 ;
-(void)setChosenCollection:(PHAssetCollection *)arg1 ;
-(PHFetchOptions *)fetchOptions;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id<IGInlineGalleryDataSourceDelegate>)delegate;
-(int)numberOfItems;
-(CGSize)thumbnailSize;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
@end

