
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol IGGalleryCollectionViewControllerDelegate;
@class NSArray, UIView, UICollectionView, PHCachingImageManager, PHImageRequestOptions, NSString;

@interface IGGalleryCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource> {

	char _canShowSelectedOverlay;
	NSArray* _assets;
	id<IGGalleryCollectionViewControllerDelegate> _delegate;
	UIView* _galleryCollectionViewOverlay;
	UICollectionView* _galleryCollectionView;
	PHCachingImageManager* _imageManager;
	PHImageRequestOptions* _imageRequestOptions;
	IGAssetSelectionMechanic _assetSelectionMechanic;

}

@property (nonatomic,retain) UIView * galleryCollectionViewOverlay;                                      //@synthesize galleryCollectionViewOverlay=_galleryCollectionViewOverlay - In the implementation block
@property (nonatomic,retain) UICollectionView * galleryCollectionView;                                   //@synthesize galleryCollectionView=_galleryCollectionView - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                       //@synthesize imageManager=_imageManager - In the implementation block
@property (nonatomic,retain) PHImageRequestOptions * imageRequestOptions;                                //@synthesize imageRequestOptions=_imageRequestOptions - In the implementation block
@property (nonatomic,retain) NSArray * assets;                                                           //@synthesize assets=_assets - In the implementation block
@property (assign,nonatomic,__weak) id<IGGalleryCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char canShowSelectedOverlay;                                                //@synthesize canShowSelectedOverlay=_canShowSelectedOverlay - In the implementation block
@property (assign,nonatomic) IGAssetSelectionMechanic assetSelectionMechanic;                            //@synthesize assetSelectionMechanic=_assetSelectionMechanic - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanShowSelectedOverlay:(char)arg1 ;
-(void)setImageRequestOptions:(PHImageRequestOptions *)arg1 ;
-(PHImageRequestOptions *)imageRequestOptions;
-(char)canShowSelectedOverlay;
-(IGAssetSelectionMechanic)assetSelectionMechanic;
-(void)setAssetSelectionMechanic:(IGAssetSelectionMechanic)arg1 ;
-(void)setupImageManagerAndOptions;
-(void)setGalleryCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)galleryCollectionView;
-(void)setGalleryCollectionViewOverlay:(UIView *)arg1 ;
-(UIView *)galleryCollectionViewOverlay;
-(char)indexPathIsSeeAll:(id)arg1 ;
-(void)deselectCells;
-(id)assetAtIndexPath:(id)arg1 ;
-(void)setAssets:(NSArray *)arg1 ;
-(NSArray *)assets;
-(void)setDelegate:(id<IGGalleryCollectionViewControllerDelegate>)arg1 ;
-(id)init;
-(id<IGGalleryCollectionViewControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setDisabled:(char)arg1 ;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(PHCachingImageManager *)imageManager;
@end

