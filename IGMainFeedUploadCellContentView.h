
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGMainFeedUploadCellContentViewDelegate;
@class IGUploadModel, NSDate, UIButton, UILabel, UIImageView, UIProgressView, NSMutableArray, NSString;

@interface IGMainFeedUploadCellContentView : UIView <IGActionSheetDelegate> {

	char _hasRenderedImage;
	IGUploadModel* _activePost;
	id<IGMainFeedUploadCellContentViewDelegate> _delegate;
	NSDate* _uploadStart;
	UIButton* _retryButton;
	UIButton* _removeButton;
	UILabel* _statusLabel;
	UIImageView* _imageView;
	UIImageView* _imageOverlayView;
	UIProgressView* _progressView;
	unsigned _uploadPhase;
	NSMutableArray* _uploadPhaseProgress;
	int _mode;

}

@property (nonatomic,retain) NSDate * uploadStart;                                                     //@synthesize uploadStart=_uploadStart - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                                                   //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIButton * removeButton;                                                  //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                                           //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) unsigned uploadPhase;                                                     //@synthesize uploadPhase=_uploadPhase - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadPhaseProgress;                                     //@synthesize uploadPhaseProgress=_uploadPhaseProgress - In the implementation block
@property (assign,nonatomic) int mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) IGUploadModel * activePost;                                               //@synthesize activePost=_activePost - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedUploadCellContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIButton *)retryButton;
-(id)initWithFrame:(CGRect)arg1 inViewMode:(int)arg2 ;
-(void)setActivePost:(IGUploadModel *)arg1 ;
-(IGUploadModel *)activePost;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)removeKeyValueObservationFromActivePost;
-(void)removeUpload:(id)arg1 ;
-(void)retryUpload:(id)arg1 ;
-(void)onMediaUploadCompleted:(id)arg1 ;
-(void)addKeyValueObservationToActivePost;
-(void)updateUploadPhase:(unsigned)arg1 withProgress:(float)arg2 ;
-(NSDate *)uploadStart;
-(void)setUploadStart:(NSDate *)arg1 ;
-(void)setRetryButton:(UIButton *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(UIImageView *)imageOverlayView;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(unsigned)uploadPhase;
-(void)setUploadPhase:(unsigned)arg1 ;
-(NSMutableArray *)uploadPhaseProgress;
-(void)setUploadPhaseProgress:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<IGMainFeedUploadCellContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedUploadCellContentViewDelegate>)delegate;
-(UIImageView *)imageView;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)updateContent;
-(UIButton *)removeButton;
-(void)updateProgressView;
@end

