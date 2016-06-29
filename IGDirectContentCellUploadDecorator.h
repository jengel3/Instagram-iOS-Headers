
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContentUploadInfoObserver.h>
#import <Instagram/IGDirectContentCellDecorator.h>

@protocol IGDirectContentUploadCell, IGDirectCellProtocol, IGDirectUploadable;
@class UICollectionViewCell, UIButton, UIView, UIActivityIndicatorView, IGDirectContent, NSString;

@interface IGDirectContentCellUploadDecorator : NSObject <IGDirectContentUploadInfoObserver, IGDirectContentCellDecorator> {

	char _showingFailedUI;
	char _shouldShowProgress;
	char _shouldShowSendingDot;
	char _bottomAlignActionButton;
	id<IGDirectContentUploadCell> _delegate;
	int _layoutStyle;
	UICollectionViewCell*<IGDirectCellProtocol> _cell;
	UIButton* _actionButton;
	UIView* _sendingDot;
	UIActivityIndicatorView* _spinner;
	IGDirectContent*<IGDirectUploadable> _upload;
	CGSize _spinnerOffset;

}

@property (assign,nonatomic,__weak) UICollectionViewCell*<IGDirectCellProtocol> cell;              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) UIView * sendingDot;                                                  //@synthesize sendingDot=_sendingDot - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                    //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) IGDirectContent*<IGDirectUploadable> upload;                          //@synthesize upload=_upload - In the implementation block
@property (assign,nonatomic) char showingFailedUI;                                                 //@synthesize showingFailedUI=_showingFailedUI - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectContentUploadCell> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char shouldShowProgress;                                              //@synthesize shouldShowProgress=_shouldShowProgress - In the implementation block
@property (assign,nonatomic) CGSize spinnerOffset;                                                 //@synthesize spinnerOffset=_spinnerOffset - In the implementation block
@property (nonatomic,readonly) float rightOffset; 
@property (assign,nonatomic) char shouldShowSendingDot;                                            //@synthesize shouldShowSendingDot=_shouldShowSendingDot - In the implementation block
@property (nonatomic,readonly) NSString * timestampText; 
@property (assign,nonatomic) char bottomAlignActionButton;                                         //@synthesize bottomAlignActionButton=_bottomAlignActionButton - In the implementation block
@property (assign,nonatomic) int layoutStyle;                                                      //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)timestampText;
-(void)notifyStatusChangedForUploadInfo:(id)arg1 ;
-(void)notifyUploadProgressForUploadInfo:(id)arg1 withUploadProgress:(float)arg2 ;
-(void)showActionMenu;
-(void)showFailedUI;
-(void)showSendingUI;
-(void)detachGestureRecognizers;
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(void)attachGestureRecognizers;
-(char)shouldShowProgress;
-(char)shouldShowSendingDot;
-(id)createSendingDot;
-(void)setSendingDot:(UIView *)arg1 ;
-(UIView *)sendingDot;
-(char)bottomAlignActionButton;
-(CGSize)spinnerOffset;
-(void)setShowingFailedUI:(char)arg1 ;
-(void)finishLayout;
-(float)rightOffset;
-(char)showingFailedUI;
-(void)setShouldShowProgress:(char)arg1 ;
-(void)setSpinnerOffset:(CGSize)arg1 ;
-(void)setShouldShowSendingDot:(char)arg1 ;
-(void)setBottomAlignActionButton:(char)arg1 ;
-(void)setUpload:(IGDirectContent*<IGDirectUploadable>)arg1 ;
-(IGDirectContent*<IGDirectUploadable>)upload;
-(UIButton *)actionButton;
-(void)setDelegate:(id<IGDirectContentUploadCell>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectContentUploadCell>)delegate;
-(void)prepareForReuse;
-(UICollectionViewCell*<IGDirectCellProtocol>)cell;
-(void)setCell:(UICollectionViewCell*<IGDirectCellProtocol>)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setContent:(id)arg1 ;
-(int)layoutStyle;
-(void)setLayoutStyle:(int)arg1 ;
@end

