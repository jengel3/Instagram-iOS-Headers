
#import <UIKit/UIView.h>

@class NSMutableArray, UILabel, UIButton, IGNetworkMonitor, IGFeedNetworkSource;

@interface IGDebugBar : UIView {

	NSMutableArray* _labels;
	UILabel* _requestCounter;
	UILabel* _transferRateIndicator;
	UILabel* _videoPlaybackHistory;
	UILabel* _videoPlayerUsageCount;
	UIButton* _networkMonitorButton;
	IGNetworkMonitor* _networkMonitor;
	UILabel* _logItemLabel;
	NSMutableArray* _pendingMessages;
	int _networkMonitorStyle;
	IGFeedNetworkSource* _feedSource;

}

@property (assign,nonatomic,__weak) IGFeedNetworkSource * feedSource;              //@synthesize feedSource=_feedSource - In the implementation block
+(id)debugBarFontForSize:(float)arg1 ;
+(id)newStatusBarLabel;
+(id)sharedDebugBar;
-(void)setFeedSource:(IGFeedNetworkSource *)arg1 ;
-(IGFeedNetworkSource *)feedSource;
-(void)buildRequestCounter;
-(void)buildTransferIndicator;
-(void)buildVideoPlaybackHistory;
-(void)buildVideoPlayerUsageCount;
-(void)buildNetworkMonitorButton;
-(void)buildLogView;
-(void)networkSpeedChanged;
-(void)playerUsageDidChange:(id)arg1 ;
-(void)playbackRateChanged:(id)arg1 ;
-(void)updateTransferLabel;
-(void)toggleNetworkMonitor;
-(void)showMessage:(id)arg1 type:(int)arg2 ;
-(void)doShowMessage:(id)arg1 type:(int)arg2 ;
-(void)hideMessage;
-(void)sizeStatusBarLabel:(id)arg1 ;
-(void)doObserveValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)showWarning:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)showMessage:(id)arg1 ;
-(void)showError:(id)arg1 ;
@end

