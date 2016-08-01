
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <Instagram/IGAlbumViewerDelegate.h>
#import <Instagram/IGAlbumItemControllerDelegate.h>
#import <Instagram/IGAlbumDataControllerListener.h>
#import <Instagram/IGAlbumDataControllerItemListener.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <Instagram/IGMediaPreloaderPhotoProgressDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Instagram/IGAlbumTrayCollectionViewCellDelegate.h>
#import <Instagram/IGListItemType.h>

@class IGAlbumDataController, IGListAdapter, IGListAdapterUpdaterLogger, IGAlbumTrayLoggingContext, IGAlbumViewerPresentationAnimationController, IGAlbumTrayCell, IGReelViewModel, IGMediaPreloader, IGAlbumItemController, NSString;

@interface IGAlbumTrayItemController : IGListItemController <IGListAdapterDataSource, IGListAdapterDelegate, IGAlbumViewerDelegate, IGAlbumItemControllerDelegate, IGAlbumDataControllerListener, IGAlbumDataControllerItemListener, UIViewControllerTransitioningDelegate, IGMediaPreloaderPhotoProgressDelegate, UIScrollViewDelegate, IGAlbumTrayCollectionViewCellDelegate, IGListItemType> {

	IGAlbumDataController* _dataController;
	IGListAdapter* _listAdapter;
	IGListAdapterUpdaterLogger* _listAdapterUpdaterLogger;
	IGAlbumTrayLoggingContext* _loggingContext;
	IGAlbumViewerPresentationAnimationController* _animationController;
	IGAlbumTrayCell* _selectedCell;
	IGReelViewModel* _selectedItem;
	IGMediaPreloader* _mediaPreloader;
	IGAlbumItemController* _nuxController;

}

@property (nonatomic,readonly) IGAlbumDataController * dataController;                                        //@synthesize dataController=_dataController - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                                   //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * listAdapterUpdaterLogger;                         //@synthesize listAdapterUpdaterLogger=_listAdapterUpdaterLogger - In the implementation block
@property (nonatomic,retain) IGAlbumTrayLoggingContext * loggingContext;                                      //@synthesize loggingContext=_loggingContext - In the implementation block
@property (nonatomic,retain) IGAlbumViewerPresentationAnimationController * animationController;              //@synthesize animationController=_animationController - In the implementation block
@property (nonatomic,retain) IGAlbumTrayCell * selectedCell;                                                  //@synthesize selectedCell=_selectedCell - In the implementation block
@property (nonatomic,retain) IGReelViewModel * selectedItem;                                                  //@synthesize selectedItem=_selectedItem - In the implementation block
@property (nonatomic,retain) IGMediaPreloader * mediaPreloader;                                               //@synthesize mediaPreloader=_mediaPreloader - In the implementation block
@property (nonatomic,retain) IGAlbumItemController * nuxController;                                           //@synthesize nuxController=_nuxController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoggingContext:(IGAlbumTrayLoggingContext *)arg1 ;
-(IGAlbumTrayLoggingContext *)loggingContext;
-(void)scrollToFrontAnimated:(char)arg1 ;
-(id)itemForReelPK:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)resetSelectedCell;
-(IGMediaPreloader *)mediaPreloader;
-(IGListAdapterUpdaterLogger *)listAdapterUpdaterLogger;
-(void)attemptToPreloadImages;
-(void)presentViewerFromItem:(id)arg1 cell:(id)arg2 ;
-(id)cellForReelPK:(id)arg1 ;
-(void)fetchNeighborsAndItemsForModel:(id)arg1 ;
-(char)shouldShowAddToStoryNuxForDismissedViewModel:(id)arg1 ;
-(void)showAddToStoryNUX;
-(id)leftBarButtonItemView;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)albumViewerDidFinish:(id)arg1 ;
-(void)albumViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2 ;
-(void)trayItemController:(id)arg1 didSelectCell:(id)arg2 ;
-(void)albumDataController:(id)arg1 didUpdateWithRefreshType:(int)arg2 updateDuration:(double)arg3 ;
-(void)albumDataController:(id)arg1 fetchTrayDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)albumDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)albumDataController:(id)arg1 fetchItemsDidFailWithError:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)albumDataController:(id)arg1 didReturnNoResultsForPK:(id)arg2 refreshType:(int)arg3 updateDuration:(double)arg4 ;
-(void)mediaPreloader:(id)arg1 didLoadPhotoForItem:(id)arg2 url:(id)arg3 ;
-(void)mediaPreloader:(id)arg1 didFailPhotoForItem:(id)arg2 url:(id)arg3 ;
-(void)trayCollectionViewCellWasRemovedFromWindow:(id)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)initWithLoggingContext:(id)arg1 ;
-(id)firstStoryCell;
-(void)setMediaPreloader:(IGMediaPreloader *)arg1 ;
-(IGAlbumItemController *)nuxController;
-(void)setNuxController:(IGAlbumItemController *)arg1 ;
-(IGAlbumTrayCell *)selectedCell;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setAnimationController:(IGAlbumViewerPresentationAnimationController *)arg1 ;
-(IGAlbumViewerPresentationAnimationController *)animationController;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setSelectedItem:(IGReelViewModel *)arg1 ;
-(unsigned)numberOfItems;
-(IGReelViewModel *)selectedItem;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(void)setSelectedCell:(IGAlbumTrayCell *)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
-(IGAlbumDataController *)dataController;
@end

