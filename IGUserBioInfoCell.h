
#import <Instagram/IGPlainTableViewCell.h>

@class UILabel;

@interface IGUserBioInfoCell : IGPlainTableViewCell {

	UILabel* _bioInfoLabel;

}

@property (nonatomic,retain) UILabel * bioInfoLabel;              //@synthesize bioInfoLabel=_bioInfoLabel - In the implementation block
+(id)validateString:(id)arg1 ;
+(id)styledStringForFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(UILabel *)bioInfoLabel;
-(float)setUserFullName:(id)arg1 bioInfo:(id)arg2 forPK:(id)arg3 withWidth:(float)arg4 ;
-(void)setBioInfoLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

