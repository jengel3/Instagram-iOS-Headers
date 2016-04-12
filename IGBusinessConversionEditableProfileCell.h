
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol IGBusinessConversionEditableProfileCellDelegate;
@class IGTextField, NSIndexPath, UIImageView, UIView, NSString;

@interface IGBusinessConversionEditableProfileCell : UITableViewCell <UITextFieldDelegate> {

	char _shouldShowDisclosure;
	IGTextField* _textField;
	NSIndexPath* _dataKey;
	id<IGBusinessConversionEditableProfileCellDelegate> _delegate;
	int _maxCharacterLimit;
	UIImageView* _disclosureIndicator;
	UIView* _bottomLine;
	UIEdgeInsets _bottomLineInsets;

}

@property (nonatomic,retain) IGTextField * textField;                                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) NSIndexPath * dataKey;                                                            //@synthesize dataKey=_dataKey - In the implementation block
@property (assign,nonatomic) char shouldShowDisclosure;                                                        //@synthesize shouldShowDisclosure=_shouldShowDisclosure - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionEditableProfileCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets bottomLineInsets;                                                    //@synthesize bottomLineInsets=_bottomLineInsets - In the implementation block
@property (assign,nonatomic) int maxCharacterLimit;                                                            //@synthesize maxCharacterLimit=_maxCharacterLimit - In the implementation block
@property (nonatomic,retain) UIImageView * disclosureIndicator;                                                //@synthesize disclosureIndicator=_disclosureIndicator - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                              //@synthesize bottomLine=_bottomLine - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(UIImageView *)disclosureIndicator;
-(void)setDisclosureIndicator:(UIImageView *)arg1 ;
-(UIEdgeInsets)defaultSeparatorInsets;
-(void)setBottomLineInsets:(UIEdgeInsets)arg1 ;
-(void)setShouldShowDisclosure:(char)arg1 ;
-(void)setMaxCharacterLimit:(int)arg1 ;
-(UIEdgeInsets)bottomLineInsets;
-(int)maxCharacterLimit;
-(void)setDelegate:(id<IGBusinessConversionEditableProfileCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGBusinessConversionEditableProfileCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(IGTextField *)textField;
-(void)setTextField:(IGTextField *)arg1 ;
-(char)shouldShowDisclosure;
-(void)setDataKey:(NSIndexPath *)arg1 ;
-(NSIndexPath *)dataKey;
@end

