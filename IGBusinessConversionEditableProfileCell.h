
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTableViewCell.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGBusinessConversionEditableProfileCellDelegate;
@class IGTextField, NSIndexPath, NSString;

@interface IGBusinessConversionEditableProfileCell : IGTableViewCell <IGTextFieldDelegate> {

	IGTextField* _textField;
	NSIndexPath* _dataKey;
	id<IGBusinessConversionEditableProfileCellDelegate> _delegate;
	int _maxCharacterLimit;

}

@property (nonatomic,retain) IGTextField * textField;                                                          //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) NSIndexPath * dataKey;                                                            //@synthesize dataKey=_dataKey - In the implementation block
@property (assign,nonatomic,__weak) id<IGBusinessConversionEditableProfileCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int maxCharacterLimit;                                                            //@synthesize maxCharacterLimit=_maxCharacterLimit - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)maxCharacterLimit;
-(void)setMaxCharacterLimit:(int)arg1 ;
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
-(void)setDataKey:(NSIndexPath *)arg1 ;
-(NSIndexPath *)dataKey;
@end

