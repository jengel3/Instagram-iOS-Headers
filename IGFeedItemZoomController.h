
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGFeedItemZoomControllerZoomingDelegate, IGFeedItemZoomControllerLoadingDelegate;
@class UIView, UICollectionViewCell, NSURL, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, NSString;

@interface IGFeedItemZoomController : NSObject <UIGestureRecognizerDelegate> {

	char _isVideo;
	UIView* _view;
	UIView* _supplementaryView;
	UICollectionViewCell* _cell;
	NSURL* _url;
	id<IGFeedItemZoomControllerZoomingDelegate> _delegate;
	id<IGFeedItemZoomControllerLoadingDelegate> _loadingDelegate;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	UIView* _zoomView;

}

@property (nonatomic,retain) UIView * zoomView;                                                               //@synthesize zoomView=_zoomView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIRotationGestureRecognizer * rotationGestureRecognizer;                         //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                                            //@synthesize view=_view - In the implementation block
@property (assign,nonatomic,__weak) UIView * supplementaryView;                                               //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * cell;                                                     //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char isVideo;                                                                  //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerZoomingDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemZoomControllerLoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLoadingDelegate:(id<IGFeedItemZoomControllerLoadingDelegate>)arg1 ;
-(void)clearZoomingRecognizers;
-(id)initWithMediaView:(id)arg1 supplementaryView:(id)arg2 recognizerView:(id)arg3 url:(id)arg4 cell:(id)arg5 isVideo:(char)arg6 delegate:(id)arg7 ;
-(void)setupZoomingRecognizers;
-(void)onZoomAction:(id)arg1 ;
-(void)setRotationGestureRecognizer:(UIRotationGestureRecognizer *)arg1 ;
-(char)isZoomingRecognizer:(id)arg1 ;
-(UIView *)supplementaryView;
-(void)setSupplementaryView:(UIView *)arg1 ;
-(id<IGFeedItemZoomControllerLoadingDelegate>)loadingDelegate;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)setDelegate:(id<IGFeedItemZoomControllerZoomingDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFeedItemZoomControllerZoomingDelegate>)delegate;
-(UIView *)view;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(NSURL *)url;
-(void)setView:(UIView *)arg1 ;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)setUrl:(NSURL *)arg1 ;
-(UICollectionViewCell *)cell;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(char)isVideo;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(UIView *)zoomView;
-(void)setZoomView:(UIView *)arg1 ;
@end

