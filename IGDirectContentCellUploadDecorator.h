
#import <Instagram/IGDirectContentUploadInfoObserver.h>
#import <Instagram/IGDirectContentCellDecorator.h>

@protocol IGDirectContentUploadCell, IGDirectContentUploadable;
@class IGDirectContentCell, UIButton, UIView, UIActivityIndicatorView, IGDirectContent, NSString;

@interface IGDirectContentCellUploadDecorator : NSObject <IGDirectContentUploadInfoObserver, IGDirectContentCellDecorator> {

	char _shouldShowProgress;
	id<IGDirectContentUploadCell> _delegate;
	IGDirectContentCell* _cell;
	UIButton* _actionButton;
	UIView* _sendingDot;
	UIActivityIndicatorView* _spinner;
	IGDirectContent*<IGDirectContentUploadable> _upload;

}

@property (assign,nonatomic,__weak) id<IGDirectContentUploadCell> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShowProgress;                                         //@synthesize shouldShowProgress=_shouldShowProgress - In the implementation block
@property (nonatomic,readonly) float rightOffset; 
@property (nonatomic,readonly) NSString * timestampText; 
@property (assign,nonatomic,__weak) IGDirectContentCell * cell;                               //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                         //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIView * sendingDot;                                             //@synthesize sendingDot=_sendingDot - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGDirectContent*<IGDirectContentUploadable> upload;              //@synthesize upload=_upload - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGDirectContent*<IGDirectContentUploadable>)upload;
-(void)notifyStatusChangedForUploadInfo:(id)arg1 ;
-(void)notifyUploadProgressForUploadInfo:(id)arg1 withUploadProgress:(float)arg2 ;
-(float)rightOffset;
-(NSString *)timestampText;
-(void)showActionMenu;
-(void)showFailedUI;
-(void)showSendingUI;
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(char)shouldShowProgress;
-(UIView *)sendingDot;
-(void)setShouldShowProgress:(char)arg1 ;
-(void)setSendingDot:(UIView *)arg1 ;
-(void)setUpload:(IGDirectContent*<IGDirectContentUploadable>)arg1 ;
-(UIButton *)actionButton;
-(void)setDelegate:(id<IGDirectContentUploadCell>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUploadCell>)delegate;
-(void)prepareForReuse;
-(IGDirectContentCell *)cell;
-(void)setCell:(IGDirectContentCell *)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setContent:(id)arg1 ;
@end

