
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGInlineGalleryDataSourceDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGAlbumGalleryDelegate;
@class UILabel, IGAlbumGalleryPermissionView, UICollectionView, IGInlineGalleryPHDataSource, NSString;

@interface IGAlbumGalleryViewController : UIViewController <IGInlineGalleryDataSourceDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	char _hasCompletedInitialFetch;
	id<IGAlbumGalleryDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _placeholderLabel;
	IGAlbumGalleryPermissionView* _permissionsView;
	UICollectionView* _collectionView;
	IGInlineGalleryPHDataSource* _galleryDataSource;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * placeholderLabel;                                   //@synthesize placeholderLabel=_placeholderLabel - In the implementation block
@property (nonatomic,readonly) IGAlbumGalleryPermissionView * permissionsView;               //@synthesize permissionsView=_permissionsView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGInlineGalleryPHDataSource * galleryDataSource;              //@synthesize galleryDataSource=_galleryDataSource - In the implementation block
@property (assign,nonatomic) char hasCompletedInitialFetch;                                  //@synthesize hasCompletedInitialFetch=_hasCompletedInitialFetch - In the implementation block
@property (assign,nonatomic,__weak) id<IGAlbumGalleryDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)preferredHeightInWidth:(float)arg1 ;
-(void)initializeInlineGallerySource;
-(void)setHasCompletedInitialFetch:(char)arg1 ;
-(void)updateViewVisibilityAnimated:(char)arg1 ;
-(IGInlineGalleryPHDataSource *)galleryDataSource;
-(void)didTapEnablePhotosAccess;
-(IGAlbumGalleryPermissionView *)permissionsView;
-(char)hasCompletedInitialFetch;
-(void)inlineGalleryDataSourceDidChange:(id)arg1 ;
-(void)setDelegate:(id<IGAlbumGalleryDelegate>)arg1 ;
-(id<IGAlbumGalleryDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UILabel *)titleLabel;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(UILabel *)placeholderLabel;
@end

