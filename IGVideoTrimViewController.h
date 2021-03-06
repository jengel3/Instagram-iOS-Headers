
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGVideoTrimViewDelegate.h>
#import <Instagram/IGVideoTrimViewControlDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol IGVideoTrimControllerDelegate, IGVideoTrimConfirmationDelegate;
@class IGVideoClip, IGVideoTrimView, NSString;

@interface IGVideoTrimViewController : UIViewController <IGVideoTrimViewDelegate, IGVideoTrimViewControlDelegate, UIScrollViewDelegate> {

	char _alwaysClampsTrimmedRange;
	char _clampTrimmedRange;
	char _pendingTrimHandleJustification;
	IGVideoClip* _videoClip;
	id<IGVideoTrimControllerDelegate> _trimRangeDelegate;
	unsigned _confirmationDisplayType;
	id<IGVideoTrimConfirmationDelegate> _confirmationDelegate;
	float _timeScale;
	float _minClipLength;
	float _maxClipLength;
	IGVideoTrimView* _trimView;
	float _fixedPlaybackSpeed;
	float _dynamicPlaybackSpeed;
	float _previousContentOffset;
	IGRange _workingTrimmedRange;
	IGRange _committedTrimmedRange;
	UIEdgeInsets _trimViewContentInsets;

}

@property (nonatomic,retain) IGVideoClip * videoClip;                                                      //@synthesize videoClip=_videoClip - In the implementation block
@property (assign,nonatomic) float minClipLength;                                                          //@synthesize minClipLength=_minClipLength - In the implementation block
@property (assign,nonatomic) float maxClipLength;                                                          //@synthesize maxClipLength=_maxClipLength - In the implementation block
@property (assign,nonatomic) IGRange workingTrimmedRange;                                                  //@synthesize workingTrimmedRange=_workingTrimmedRange - In the implementation block
@property (assign,nonatomic) IGRange committedTrimmedRange;                                                //@synthesize committedTrimmedRange=_committedTrimmedRange - In the implementation block
@property (nonatomic,retain) IGVideoTrimView * trimView;                                                   //@synthesize trimView=_trimView - In the implementation block
@property (assign,nonatomic) float fixedPlaybackSpeed;                                                     //@synthesize fixedPlaybackSpeed=_fixedPlaybackSpeed - In the implementation block
@property (assign,nonatomic) float dynamicPlaybackSpeed;                                                   //@synthesize dynamicPlaybackSpeed=_dynamicPlaybackSpeed - In the implementation block
@property (assign,nonatomic) char clampTrimmedRange;                                                       //@synthesize clampTrimmedRange=_clampTrimmedRange - In the implementation block
@property (assign,nonatomic) float previousContentOffset;                                                  //@synthesize previousContentOffset=_previousContentOffset - In the implementation block
@property (assign,nonatomic) char pendingTrimHandleJustification;                                          //@synthesize pendingTrimHandleJustification=_pendingTrimHandleJustification - In the implementation block
@property (nonatomic,readonly) unsigned panningTrimHandle; 
@property (assign,nonatomic,__weak) id<IGVideoTrimControllerDelegate> trimRangeDelegate;                   //@synthesize trimRangeDelegate=_trimRangeDelegate - In the implementation block
@property (assign,nonatomic) unsigned confirmationDisplayType;                                             //@synthesize confirmationDisplayType=_confirmationDisplayType - In the implementation block
@property (assign,nonatomic,__weak) id<IGVideoTrimConfirmationDelegate> confirmationDelegate;              //@synthesize confirmationDelegate=_confirmationDelegate - In the implementation block
@property (assign,nonatomic) char alwaysClampsTrimmedRange;                                                //@synthesize alwaysClampsTrimmedRange=_alwaysClampsTrimmedRange - In the implementation block
@property (assign,nonatomic) float timeScale;                                                              //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) UIEdgeInsets trimViewContentInsets;                                           //@synthesize trimViewContentInsets=_trimViewContentInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTrimRangeDelegate:(id<IGVideoTrimControllerDelegate>)arg1 ;
-(void)setAlwaysClampsTrimmedRange:(char)arg1 ;
-(void)setTrimViewContentInsets:(UIEdgeInsets)arg1 ;
-(void)updatePlaybackTime:(SCD_Struct_IG53)arg1 ;
-(void)updateWithVideoClip:(id)arg1 minClipLenght:(float)arg2 maxClipLength:(float)arg3 ;
-(void)setTimeScale:(float)arg1 ;
-(void)setConfirmationDisplayType:(unsigned)arg1 ;
-(void)setConfirmationDelegate:(id<IGVideoTrimConfirmationDelegate>)arg1 ;
-(unsigned)panningTrimHandle;
-(IGVideoClip *)videoClip;
-(void)trimViewWillBeginUpdatingTrimmedRange:(id)arg1 ;
-(void)trimView:(id)arg1 didUpdateTrimmedRange:(IGRange)arg2 ;
-(void)trimViewDidEndUpdatingTrimmedRange:(id)arg1 ;
-(void)configureNavItems;
-(void)rejectTrim;
-(void)confirmTrim;
-(void)updateVideoTrimmedTimesWithTrimmedRange:(IGRange)arg1 ;
-(void)finishTrimming;
-(unsigned)currentRubberbandingType;
-(void)videoTrimViewDidPressDone;
-(void)videoTrimViewDidPressCancel;
-(void)setVideoClip:(IGVideoClip *)arg1 ;
-(id<IGVideoTrimControllerDelegate>)trimRangeDelegate;
-(unsigned)confirmationDisplayType;
-(id<IGVideoTrimConfirmationDelegate>)confirmationDelegate;
-(char)alwaysClampsTrimmedRange;
-(UIEdgeInsets)trimViewContentInsets;
-(float)minClipLength;
-(void)setMinClipLength:(float)arg1 ;
-(float)maxClipLength;
-(void)setMaxClipLength:(float)arg1 ;
-(IGRange)workingTrimmedRange;
-(void)setWorkingTrimmedRange:(IGRange)arg1 ;
-(IGRange)committedTrimmedRange;
-(void)setCommittedTrimmedRange:(IGRange)arg1 ;
-(IGVideoTrimView *)trimView;
-(void)setTrimView:(IGVideoTrimView *)arg1 ;
-(float)fixedPlaybackSpeed;
-(void)setFixedPlaybackSpeed:(float)arg1 ;
-(float)dynamicPlaybackSpeed;
-(void)setDynamicPlaybackSpeed:(float)arg1 ;
-(char)clampTrimmedRange;
-(void)setClampTrimmedRange:(char)arg1 ;
-(char)pendingTrimHandleJustification;
-(void)setPendingTrimHandleJustification:(char)arg1 ;
-(float)timeScale;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(float)previousContentOffset;
-(void)setPreviousContentOffset:(float)arg1 ;
@end

