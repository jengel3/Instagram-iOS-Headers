
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface IGEventViewerSoundBadge : UIView {

	UILabel* _label;

}

@property (assign,nonatomic,__weak) UILabel * label;              //@synthesize label=_label - In the implementation block
-(void)updateTextForMuteState;
-(void)didReceiveMuteStateChangeNotification:(id)arg1 ;
-(void)updateHiddenForMuteState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)textAttributes;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setupSubviews;
@end

