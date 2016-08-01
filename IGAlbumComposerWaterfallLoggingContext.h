
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <Instagram/IGAnalyticsUploadWaterfall.h>

@class NSString, IGAlbumComposerShareItemInfo, NSMutableArray;

@interface IGAlbumComposerWaterfallLoggingContext : NSObject <NSSecureCoding, IGAnalyticsUploadWaterfall> {

	int _entryPoint;
	int _exitPoint;
	NSString* _sessionID;
	double _startTimestamp;
	IGAlbumComposerShareItemInfo* _shareItemInfo;
	int _lastDrawModeStarted;
	int _capturePhotoCounter;
	int _captureVideoCounter;
	int _flashButtonTapCounter;
	int _cameraFlipCounter;
	int _saveMediaCounter;
	int _textEditCounter;
	NSMutableArray* _drawModeCounters;
	char _filterToggled;
	NSMutableArray* _drawModeSizeToggleCount;
	NSMutableArray* _drawModeColorToggleCount;
	double _textEditTotalDuration;
	double _textEditCurrentStart;
	NSMutableArray* _drawModeTotalDuration;
	double _drawModeCurrentStart;
	char _didLogCompletion;

}

@property (nonatomic,readonly) char didLogCompletion;               //@synthesize didLogCompletion=_didLogCompletion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(id)initWithEntryPoint:(int)arg1 ;
-(void)notifyCompletionWithExitPoint:(int)arg1 ;
-(void)logEnterEvent;
-(void)logComposeEvent;
-(void)logStepWithName:(id)arg1 extraDict:(id)arg2 ;
-(id)currentSessionID;
-(id)logUploadEvent:(id)arg1 ;
-(void)notifyShareItemWithItemInfo:(id)arg1 ;
-(void)notifyCapturePhoto;
-(void)notifyCaptureVideo;
-(void)notifyTapFlashButton;
-(void)notifyFlipCamera;
-(void)notifyFilterToggle;
-(void)notifyTextEditStart;
-(void)notifyTextEditEnd;
-(void)notifyDrawModeStart:(int)arg1 ;
-(void)notifyCurrentDrawModeEnd;
-(void)notifyDrawModeSizeToggle:(int)arg1 ;
-(void)notifyDrawModeColorToggle:(int)arg1 ;
-(void)notifyTapSaveMedia;
-(char)didLogCompletion;
-(double)secondsSinceStart;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

