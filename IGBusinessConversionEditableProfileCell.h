
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGBusinessConversionEditableProfileCellDelegate;
@class IGTextField, NSString, NSNumber, UILabel, UIImageView;

@interface IGBusinessConversionEditableProfileCell : UITableViewCell <UITextFieldDelegate> {

	char _shouldShowDisclosure;
	IGTextField* _textField;
	NSString* _headerText;
	NSNumber* _dataKey;
	id<IGBusinessConversionEditableProfileCellDelegate> _delegate;
	UILabel* _headerLabel;
	UIImageView* _disclosureIndicator;

}

@property (nonatomic,retain) IGTextField * textField;                                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                                              //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSNumber * dataKey;                                                               //@synthesize dataKey=_dataKey - In the implementation block
@property (assign,nonatomic) char shouldShowDisclosure;                                                        //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionEditableProfileCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                                            //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;                                                //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)disclosureIndicator;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(void)setShouldShowDisclosure:(char)arg1 ;
-(void)setDelegate:(id<IGBusinessConversionEditableProfileCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGBusinessConversionEditableProfileCellDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)textField;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setTextField:(IGTextField *)arg1 ;
-(char)shouldShowDisclosure;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(void)setDataKey:(NSNumber *)arg1 ;
-(NSNumber *)dataKey;
@end

