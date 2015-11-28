
#import <UIKit/UIView.h>

@class UILabel, UIImageView, IGKVOHandle;

@interface IGRegistrationLogoView : UIView {

	UILabel* _messageLabel;
	UIImageView* _logoView;
	IGKVOHandle* _messageLabelTextObserver;
	IGKVOHandle* _messageLabelAttributedTextObserver;

}

@property (nonatomic,retain) UILabel * messageLabel;                                        //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                        //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelTextObserver;                        //@synthesize messageLabelTextObserver=_messageLabelTextObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelAttributedTextObserver;              //@synthesize messageLabelAttributedTextObserver=_messageLabelAttributedTextObserver - In the implementation block
-(void)reloadMessageLabel;
-(void)setMessageLabelTextObserver:(IGKVOHandle *)arg1 ;
-(void)setMessageLabelAttributedTextObserver:(IGKVOHandle *)arg1 ;
-(IGKVOHandle *)messageLabelTextObserver;
-(IGKVOHandle *)messageLabelAttributedTextObserver;
-(void)dealloc;
-(id)init;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end

