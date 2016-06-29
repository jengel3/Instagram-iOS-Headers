
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface IGAdManagerAdErrorStatusView : UIView {

	UILabel* _errorStatusLabel;

}

@property (nonatomic,retain) UILabel * errorStatusLabel;              //@synthesize errorStatusLabel=_errorStatusLabel - In the implementation block
@property (nonatomic,copy) NSString * errorStatus; 
+(float)heightForWidth:(float)arg1 errorStatus:(id)arg2 ;
-(void)setUpErrorStatusLabel;
-(UILabel *)errorStatusLabel;
-(void)setErrorStatusLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setErrorStatus:(NSString *)arg1 ;
-(NSString *)errorStatus;
@end

