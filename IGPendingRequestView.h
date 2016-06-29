
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSimpleButton, UIActivityIndicatorView;

@interface IGPendingRequestView : UIView {

	/*^block*/id _acceptBlock;
	IGSimpleButton* _approveButton;
	IGSimpleButton* _ignoreButton;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) IGSimpleButton * approveButton;                 //@synthesize approveButton=_approveButton - In the implementation block
@property (nonatomic,retain) IGSimpleButton * ignoreButton;                  //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy) id acceptBlock;                                   //@synthesize acceptBlock=_acceptBlock - In the implementation block
-(IGSimpleButton *)approveButton;
-(void)onApproveButtonTapped;
-(void)onIgnoreButtonTapped;
-(id)acceptBlock;
-(void)setAcceptBlock:(id)arg1 ;
-(void)setApproveButton:(IGSimpleButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setIgnoreButton:(IGSimpleButton *)arg1 ;
-(IGSimpleButton *)ignoreButton;
@end

