
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGPageMediaViewDelegate.h>
#import <Instagram/IGDismissableOverlay.h>

@protocol IGFeedItemPageCellDelegate;
@class IGFeedItem, IGMediaOverlayIndicator, IGPageMediaView, NSString;

@interface IGFeedItemPageCell : UICollectionViewCell <IGPageMediaViewDelegate, IGDismissableOverlay> {

	char _hasShownNUX;
	IGFeedItem* _feedItem;
	float _percentVisible;
	id<IGFeedItemPageCellDelegate> _delegate;
	IGMediaOverlayIndicator* _nuxOverlayView;
	IGPageMediaView* _pageMediaView;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                       //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic) float percentVisible;                                        //@synthesize percentVisible=_percentVisible - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPageCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int currentItemIndex; 
@property (nonatomic,retain) IGMediaOverlayIndicator * nuxOverlayView;                    //@synthesize nuxOverlayView=_nuxOverlayView - In the implementation block
@property (nonatomic,retain) IGPageMediaView * pageMediaView;                             //@synthesize pageMediaView=_pageMediaView - In the implementation block
@property (assign,nonatomic) char hasShownNUX;                                            //@synthesize hasShownNUX=_hasShownNUX - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGPageMediaView *)pageMediaView;
-(IGMediaOverlayIndicator *)nuxOverlayView;
-(char)hasShownNUX;
-(int)currentItemIndex;
-(void)setHasShownNUX:(char)arg1 ;
-(void)dismissOverlayAnimated:(char)arg1 ;
-(void)scrollToPage:(int)arg1 animated:(char)arg2 ;
-(void)setPercentVisible:(float)arg1 ;
-(void)pageMediaViewWillDisplayOverlay:(id)arg1 ;
-(void)pageMediaViewDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)pageMediaViewDidDoubleTap:(id)arg1 ;
-(void)pageMediaView:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)pageMediaViewDidTriggerEndOfScrollAction:(id)arg1 ;
-(void)pageMediaViewWillDisplayActionView:(id)arg1 ;
-(void)pageMediaViewDidScroll:(id)arg1 ;
-(void)pageMediaView:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)pageMediaView:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)showNUXIfNeeded;
-(float)percentVisible;
-(void)setNuxOverlayView:(IGMediaOverlayIndicator *)arg1 ;
-(void)setPageMediaView:(IGPageMediaView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPageCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGFeedItemPageCellDelegate>)delegate;
@end

