
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol IGGridViewControllerDelegate, IGGridViewControllerScrollDelegate, OS_dispatch_queue;
@class NSArray, NSMutableArray, UIColor, PHFetchResult, NSObject, UICollectionView, PHAssetCollection, PHCachingImageManager, PHImageRequestOptions, ALAssetsLibrary, ALAssetsGroup, NSString;

@interface IGGridViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, PHPhotoLibraryChangeObserver> {

	char _forceDefaultAlbum;
	char _canShowSelectedOverlay;
	char _needsSetPhotoLibraryOptions;
	id _firstAsset;
	NSArray* _filteredResult;
	NSArray* _assets;
	NSMutableArray* _selectedAssets;
	id<IGGridViewControllerDelegate> _delegate;
	id<IGGridViewControllerScrollDelegate> _scrollDelegate;
	unsigned _assetFilterType;
	UIColor* _selectedOverlayColor;
	NSArray* _preselectedIdentifiers;
	PHFetchResult* _result;
	NSObject*<OS_dispatch_queue> _queue;
	UICollectionView* _collectionView;
	PHFetchResult* _collectionFetchResult;
	PHAssetCollection* _collection;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	ALAssetsLibrary* _assetsLibrary;
	ALAssetsGroup* _group;
	IGAssetSelectionMechanic _assetSelectionMechanic;
	CGSize _thumbnailSize;
	CGRect _previousPreheatRect;

}

@property (nonatomic,retain) NSArray * filteredResult;                                                  //@synthesize filteredResult=_filteredResult - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) id firstAsset;                                                           //@synthesize firstAsset=_firstAsset - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedAssets;                                           //@synthesize selectedAssets=_selectedAssets - In the implementation block
@property (assign,nonatomic,__weak) id<IGGridViewControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGGridViewControllerScrollDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,readonly) NSString * currentAlbumTitle; 
@property (assign,nonatomic) char forceDefaultAlbum;                                                    //@synthesize forceDefaultAlbum=_forceDefaultAlbum - In the implementation block
@property (assign,nonatomic) char canShowSelectedOverlay;                                               //@synthesize canShowSelectedOverlay=_canShowSelectedOverlay - In the implementation block
@property (assign,nonatomic) unsigned assetFilterType;                                                  //@synthesize assetFilterType=_assetFilterType - In the implementation block
@property (assign,nonatomic) IGAssetSelectionMechanic assetSelectionMechanic;                           //@synthesize assetSelectionMechanic=_assetSelectionMechanic - In the implementation block
@property (nonatomic,retain) UIColor * selectedOverlayColor;                                            //@synthesize selectedOverlayColor=_selectedOverlayColor - In the implementation block
@property (nonatomic,retain) NSArray * preselectedIdentifiers;                                          //@synthesize preselectedIdentifiers=_preselectedIdentifiers - In the implementation block
@property (nonatomic,retain) PHFetchResult * result;                                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) PHFetchResult * collectionFetchResult;                                     //@synthesize collectionFetchResult=_collectionFetchResult - In the implementation block
@property (nonatomic,retain) PHAssetCollection * collection;                                            //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                      //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;                               //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (assign,nonatomic) char needsSetPhotoLibraryOptions;                                          //@synthesize needsSetPhotoLibraryOptions=_needsSetPhotoLibraryOptions - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                                           //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) ALAssetsGroup * group;                                                     //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) CGRect previousPreheatRect;                                                //@synthesize previousPreheatRect=_previousPreheatRect - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                                      //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)cellSpacingForWidth:(float)arg1 ;
-(NSString *)currentAlbumTitle;
-(void)setCanShowSelectedOverlay:(char)arg1 ;
-(void)setSelectedAssets:(NSMutableArray *)arg1 ;
-(void)setNeedsSetPhotoLibraryOptions:(char)arg1 ;
-(void)setPhotosLibraryOptions;
-(void)resetCachedAssets;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)imageRequestOptions;
-(void)assetsLibraryDidChange:(id)arg1 ;
-(char)hasPreselectedIdentifiers;
-(NSArray *)preselectedIdentifiers;
-(void)selectAsset:(id)arg1 ;
-(char)forceDefaultAlbum;
-(void)setCollectionFetchResult:(PHFetchResult *)arg1 ;
-(PHFetchResult *)collectionFetchResult;
-(NSArray *)filteredResult;
-(void)setDefaultAlbum:(/*^block*/id)arg1 ;
-(void)filterAssetsGroup:(id)arg1 ;
-(void)updateCachedAssets;
-(unsigned)indexOfAsset:(id)arg1 ;
-(void)addToSelectAssets:(id)arg1 ;
-(void)updateSelectedCellAssetNumbers;
-(CGRect)selectedAssetFrame;
-(unsigned)indexOfSelectedAsset:(id)arg1 ;
-(id)gridViewCellForIndexPath:(id)arg1 ;
-(char)canShowSelectedOverlay;
-(UIColor *)selectedOverlayColor;
-(void)setSelectedOverlayColor:(UIColor *)arg1 ;
-(void)setPreviousPreheatRect:(CGRect)arg1 ;
-(CGRect)previousPreheatRect;
-(void)computeDifferenceBetweenRect:(CGRect)arg1 andRect:(CGRect)arg2 removedHandler:(/*^block*/id)arg3 addedHandler:(/*^block*/id)arg4 ;
-(id)assetsAtIndexPaths:(id)arg1 ;
-(char)needsSetPhotoLibraryOptions;
-(void)updateFirstAsset;
-(void)reselectSelectedAssets;
-(id)indexPathsFromIndexes:(id)arg1 indexTranslationBlock:(/*^block*/id)arg2 ;
-(void)refreshAssetGroup:(id)arg1 ;
-(void)setAlbum:(id)arg1 fromCollectionFetchResult:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 expanding:(char)arg2 ;
-(void)setSelectionMechanic:(IGAssetSelectionMechanic)arg1 ;
-(void)setFilteredResult:(NSArray *)arg1 ;
-(void)setForceDefaultAlbum:(char)arg1 ;
-(unsigned)assetFilterType;
-(void)setAssetFilterType:(unsigned)arg1 ;
-(IGAssetSelectionMechanic)assetSelectionMechanic;
-(void)setAssetSelectionMechanic:(IGAssetSelectionMechanic)arg1 ;
-(void)setPreselectedIdentifiers:(NSArray *)arg1 ;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(id)firstAsset;
-(id)fetchOptions;
-(id)assetAtIndexPath:(id)arg1 ;
-(PHAssetCollection *)collection;
-(void)setCollection:(PHAssetCollection *)arg1 ;
-(NSMutableArray *)selectedAssets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)setDelegate:(id<IGGridViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)reload;
-(id<IGGridViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setGroup:(ALAssetsGroup *)arg1 ;
-(ALAssetsGroup *)group;
-(CGSize)thumbnailSize;
-(PHFetchResult *)result;
-(id<IGGridViewControllerScrollDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<IGGridViewControllerScrollDelegate>)arg1 ;
-(void)scrollToTop;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
-(void)setResult:(PHFetchResult *)arg1 ;
@end

