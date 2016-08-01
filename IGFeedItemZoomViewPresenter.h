
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemZoomControllerZoomingDelegate.h>
#import <Instagram/IGFeedItemZoomViewControllerDelegate.h>

@protocol IGFeedItemZoomViewPresenterDelegate, IGFeedItemConfigurationType, IGFeedItemDirectResponseLoggingProviderDelegate;
@class UIViewController, NSString, UIView, IGFeedItemZoomController, IGFeedItemZoomViewController;

@interface IGFeedItemZoomViewPresenter : NSObject <IGFeedItemZoomControllerZoomingDelegate, IGFeedItemZoomViewControllerDelegate> {

	char _photoZoomEnabled;
	char _videoZoomEnabled;
	char _adZoomEnabled;
	char _supplementaryViewHidden;
	id<IGFeedItemZoomViewPresenterDelegate> _delegate;
	UIViewController* _presentingController;
	id<IGFeedItemConfigurationType> _feedConfiguration;
	id<IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
	NSString* _analyticsModule;
	UIView* _zoomedViewParentView;
	int _zoomedViewParentPosition;
	UIView* _grayRect;
	IGFeedItemZoomController* _zoomRecognizerController;
	IGFeedItemZoomViewController* _zoomViewController;
	double _zoomingStartTime;

}

@property (assign,nonatomic,__weak) id<IGFeedItemZoomViewPresenterDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingController;                                          //@synthesize presentingController=_presentingController - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemConfigurationType> feedConfiguration;                                //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemDirectResponseLoggingProviderDelegate> loggingProvider;              //@synthesize loggingProvider=_loggingProvider - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                                                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) char photoZoomEnabled;                                                                 //@synthesize photoZoomEnabled=_photoZoomEnabled - In the implementation block
@property (nonatomic,readonly) char videoZoomEnabled;                                                                 //@synthesize videoZoomEnabled=_videoZoomEnabled - In the implementation block
@property (nonatomic,readonly) char adZoomEnabled;                                                                    //@synthesize adZoomEnabled=_adZoomEnabled - In the implementation block
@property (nonatomic,retain) UIView * zoomedViewParentView;                                                           //@synthesize zoomedViewParentView=_zoomedViewParentView - In the implementation block
@property (assign,nonatomic) int zoomedViewParentPosition;                                                            //@synthesize zoomedViewParentPosition=_zoomedViewParentPosition - In the implementation block
@property (assign,nonatomic) char supplementaryViewHidden;                                                            //@synthesize supplementaryViewHidden=_supplementaryViewHidden - In the implementation block
@property (nonatomic,retain) UIView * grayRect;                                                                       //@synthesize grayRect=_grayRect - In the implementation block
@property (assign,nonatomic,__weak) IGFeedItemZoomController * zoomRecognizerController;                              //@synthesize zoomRecognizerController=_zoomRecognizerController - In the implementation block
@property (nonatomic,retain) IGFeedItemZoomViewController * zoomViewController;                                       //@synthesize zoomViewController=_zoomViewController - In the implementation block
@property (assign,nonatomic) double zoomingStartTime;                                                                 //@synthesize zoomingStartTime=_zoomingStartTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)setFeedConfiguration:(id<IGFeedItemConfigurationType>)arg1 ;
-(id)initWithDelegate:(id)arg1 itemConfiguration:(id)arg2 loggingProvider:(id)arg3 analyticsModule:(id)arg4 ;
-(void)feedItemZoomControllerDetectedZoom:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(UIViewController *)presentingController;
-(void)setPresentingController:(UIViewController *)arg1 ;
-(id<IGFeedItemDirectResponseLoggingProviderDelegate>)loggingProvider;
-(id)itemTypeForMediaType:(int)arg1 feedItem:(id)arg2 ;
-(char)photoZoomEnabled;
-(char)videoZoomEnabled;
-(char)adZoomEnabled;
-(IGFeedItemZoomViewController *)zoomViewController;
-(void)setZoomRecognizerController:(IGFeedItemZoomController *)arg1 ;
-(void)setZoomedViewParentView:(UIView *)arg1 ;
-(UIView *)zoomedViewParentView;
-(void)setZoomedViewParentPosition:(int)arg1 ;
-(void)setGrayRect:(UIView *)arg1 ;
-(UIView *)grayRect;
-(void)setZoomViewController:(IGFeedItemZoomViewController *)arg1 ;
-(void)setZoomingStartTime:(double)arg1 ;
-(IGFeedItemZoomController *)zoomRecognizerController;
-(int)zoomedViewParentPosition;
-(void)setSupplementaryViewHidden:(char)arg1 ;
-(void)feedItemZoomController:(id)arg1 willEndZoomingWithPosition:(inout CGPoint*)arg2 ;
-(char)supplementaryViewHidden;
-(double)zoomingStartTime;
-(void)feedItemZoomControllerDidEndZooming:(id)arg1 ;
-(void)setLoggingProvider:(id<IGFeedItemDirectResponseLoggingProviderDelegate>)arg1 ;
-(id<IGFeedItemConfigurationType>)feedConfiguration;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(void)setDelegate:(id<IGFeedItemZoomViewPresenterDelegate>)arg1 ;
-(id<IGFeedItemZoomViewPresenterDelegate>)delegate;
@end

