
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemMediaCell.h>
#import <Instagram/IGFeedPhotoViewDelegate.h>
#import <Instagram/IGFeedItemZoomControllerLoadingDelegate.h>

@protocol IGFeedItemPhotoCellDelegate, IGFeedItemZoomControllerZoomingDelegate;
@class IGFeedItem, IGFeedPhotoView, IGFeedItemZoomController, NSString;

@interface IGFeedItemPhotoCell : IGFeedItemMediaCell <IGFeedPhotoViewDelegate, IGFeedItemZoomControllerLoadingDelegate> {

	IGFeedItem* _post;
	IGFeedPhotoView* _photoView;
	id<IGFeedItemPhotoCellDelegate> _delegate;
	id<IGFeedItemZoomControllerZoomingDelegate> _zoomingDelegate;
	IGFeedItemZoomController* _zoomController;

}

@property (nonatomic,retain) IGFeedItemZoomController * zoomController;                                       //@synthesize zoomController=_zoomController - In the implementation block
@property (nonatomic,readonly) IGFeedPhotoView * photoView;                                                   //@synthesize photoView=_photoView - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemPhotoCellDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> zoomingDelegate;              //@synthesize zoomingDelegate=_zoomingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)post;
-(void)configureWithPost:(id)arg1 ;
-(void)associateAsPhotoViewDelegate;
-(id)accessibleElements;
-(void)feedPhotoViewDidLoadImage:(id)arg1 ;
-(void)feedPhotoDidDoubleTapToLike:(id)arg1 ;
-(void)feedPhotoViewDidTap:(id)arg1 ;
-(void)hideUsertagsIndicatorForPost:(id)arg1 ;
-(char)isMediaViewLoaded;
-(void)peekUsertagsIndicator;
-(IGFeedItemZoomController *)zoomController;
-(void)setZoomController:(IGFeedItemZoomController *)arg1 ;
-(void)setZoomingDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(id<IGFeedItemZoomControllerZoomingDelegate>)zoomingDelegate;
-(IGFeedPhotoView *)photoView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedItemPhotoCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(NSString *)description;
-(id<IGFeedItemPhotoCellDelegate>)delegate;
-(void)prepareForReuse;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end

