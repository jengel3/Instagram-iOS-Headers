
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel;

@interface IGStatButton : UIControl {

	UILabel* _countLabel;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UILabel * countLabel;              //@synthesize countLabel=_countLabel - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;               //@synthesize nameLabel=_nameLabel - In the implementation block
-(void)setCount:(id)arg1 formattingStyle:(int)arg2 ;
-(UILabel *)countLabel;
-(void)updateTextLabelsForCurrentControlState;
-(void)setCountLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setName:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(void)setCount:(id)arg1 ;
@end

