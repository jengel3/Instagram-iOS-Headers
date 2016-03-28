
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

@property (assign,nonatomic) int shareMode;                          //@synthesize shareMode=_shareMode - In the implementation block
@property (nonatomic,copy) id switchBlock;                           //@synthesize switchBlock=_switchBlock - In the implementation block
@property (nonatomic,readonly) UILabel * shareToLabel;               //@synthesize shareToLabel=_shareToLabel - In the implementation block
@property (nonatomic,retain) UIButton * broadcastLabel;              //@synthesize broadcastLabel=_broadcastLabel - In the implementation block
@property (nonatomic,retain) UIButton * directLabel;                 //@synthesize directLabel=_directLabel - In the implementation block
@property (nonatomic,retain) UIView * caretView;                     //@synthesize caretView=_caretView - In the implementation block
-(UIButton *)broadcastLabel;
-(UIButton *)directLabel;
-(void)setShareMode:(int)arg1 ;
-(void)onBroadcastButtonTapped;
-(void)sizeButton:(id)arg1 ;
-(void)onDirectButtonTapped;
-(int)shareMode;
-(id)switchBlock;
-(UILabel *)shareToLabel;
-(void)setSwitchBlock:(id)arg1 ;
-(void)setBroadcastLabel:(UIButton *)arg1 ;
-(void)setDirectLabel:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)caretView;
-(void)setCaretView:(UIView *)arg1 ;
@end

