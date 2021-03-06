
#import <UIKit/UIViewController.h>
#import <Instagram/IGInlineGalleryDataSourceDelegate.h>
#import <Instagram/IGInlineGalleryViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol IGInlineGalleryPresenter, IGInlineGalleryDataSource;
@class IGDirectedNUXView, IGInlineGalleryHostingView, NSString;

@interface IGInlineGalleryViewController : UIViewController <IGInlineGalleryDataSourceDelegate, IGInlineGalleryViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {

	char _isDataSourceInitialized;
	id<IGInlineGalleryPresenter> _delegate;
	int _style;
	int _state;
	id<IGInlineGalleryDataSource> _libraryManager;
	IGDirectedNUXView* _NUXView;
	IGInlineGalleryHostingView* _inlineGalleryView;

}

@property (assign,nonatomic) int state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) id<IGInlineGalleryDataSource> libraryManager;                //@synthesize libraryManager=_libraryManager - In the implementation block
@property (nonatomic,retain) IGDirectedNUXView * NUXView;                                 //@synthesize NUXView=_NUXView - In the implementation block
@property (nonatomic,retain) IGInlineGalleryHostingView * inlineGalleryView;              //@synthesize inlineGalleryView=_inlineGalleryView - In the implementation block
@property (assign,nonatomic) char isDataSourceInitialized;                                //@synthesize isDataSourceInitialized=_isDataSourceInitialized - In the implementation block
@property (assign,nonatomic,__weak) id<IGInlineGalleryPresenter> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int style;                                                   //@synthesize style=_style - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)inlineGalleryDataSourceDidChange:(id)arg1 ;
-(IGDirectedNUXView *)NUXView;
-(void)setNUXView:(IGDirectedNUXView *)arg1 ;
-(char)isMediaReadyAndAvailable;
-(void)setState:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationDidEnterForeground;
-(void)libraryManagerDoFetchAndCheck;
-(void)setInlineGalleryView:(IGInlineGalleryHostingView *)arg1 ;
-(IGInlineGalleryHostingView *)inlineGalleryView;
-(void)updateViewFrame;
-(char)isDataSourceInitialized;
-(void)setIsDataSourceInitialized:(char)arg1 ;
-(id)loggingExtras;
-(void)openLibraryToAllMedia;
-(char)isSeeAllCell:(id)arg1 ;
-(void)dismissButtonTappedForInlineGalleryView:(id)arg1 ;
-(void)titleBarTappedForInlineGalleryView:(id)arg1 ;
-(void)seeAllTappedForInlineGalleryView:(id)arg1 ;
-(void)didTapCameraForInlineGalleryView:(id)arg1 ;
-(void)didTapCancelForInlineGalleryView:(id)arg1 ;
-(void)didTapOutsideInlineGalleryView:(id)arg1 ;
-(id<IGInlineGalleryDataSource>)libraryManager;
-(void)setLibraryManager:(id<IGInlineGalleryDataSource>)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryPresenter>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<IGInlineGalleryPresenter>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(int)style;
-(void)viewWillLayoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)applicationWillResignActive;
-(char)isUserInitiated;
@end

