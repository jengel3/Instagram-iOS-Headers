
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIView;

@interface IGShareToggle : UIView {

	int _shareMode;
	/*^block*/id _switchBlock;
	UILabel* _shareToLabel;
	UIButton* _broadcastLabel;
	UIButton* _directLabel;
	UIView* _caretView;

}

@property (nonatomic,readonly) UILabel * shareToLabel;                   //@synthesize shareToLabel=_shareToLabel - In the implementation block
@property (nonatomic,retain) UIButton * broadcastLabel;                  //@synthesize broadcastLabel=_broadcastLabel - In the implementation block
@property (nonatomic,retain) UIButton * directLabel;                     //@synthesize directLabel=_directLabel - In the implementation block
@property (nonatomic,retain) UIView * caretView;                         //@synthesize caretView=_caretView - In the implementation block
@property (assign,nonatomic) int shareMode;                              //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,copy) id switchBlock;                               //@synthesize switchBlock=_switchBlock - In the implementation block
@property (assign,nonatomic) char shouldShowCaretIndicator; 
-(UIButton *)broadcastLabel;
-(UIButton *)directLabel;
-(void)onBroadcastButtonTapped;
-(void)sizeButton:(id)arg1 ;
-(void)onDirectButtonTapped;
-(id)switchBlock;
-(UILabel *)shareToLabel;
-(char)shouldShowCaretIndicator;
-(void)setBroadcastLabel:(UIButton *)arg1 ;
-(void)setDirectLabel:(UIButton *)arg1 ;
-(int)shareMode;
-(void)setShouldShowCaretIndicator:(char)arg1 ;
-(void)setShareMode:(int)arg1 ;
-(void)setSwitchBlock:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)caretView;
-(void)setCaretView:(UIView *)arg1 ;
@end

