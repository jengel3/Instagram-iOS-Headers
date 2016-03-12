
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UILabel, UITapGestureRecognizer, NSString;

@interface IGTagPeopleView : UIControl {

	UIImageView* _tagIndicatorImageView;
	UILabel* _tagPeopleLabel;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIImageView * tagIndicatorImageView;                 //@synthesize tagIndicatorImageView=_tagIndicatorImageView - In the implementation block
@property (nonatomic,retain) UILabel * tagPeopleLabel;                            //@synthesize tagPeopleLabel=_tagPeopleLabel - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
-(void)setTagCount:(int)arg1 ;
-(UIImageView *)tagIndicatorImageView;
-(UILabel *)tagPeopleLabel;
-(void)updateWidth;
-(void)setTagIndicatorImageView:(UIImageView *)arg1 ;
-(void)setTagPeopleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)onTap;
-(UITapGestureRecognizer *)tapRecognizer;
@end

