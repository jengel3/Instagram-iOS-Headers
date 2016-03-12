
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCountryCodeViewControllerDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>

@protocol IGChangePhoneNumberViewControllerDelegate;
@class UIButton, UILabel, UIView, UIImageView, IGTextField, NSString;

@interface IGChangePhoneNumberViewController : IGGroupedTableViewController <IGCountryCodeViewControllerDelegate, IGTextFieldDelegate> {

	id<IGChangePhoneNumberViewControllerDelegate> _delegate;
	UIButton* _countryCodeButton;
	UILabel* _countryCodeLabel;
	UILabel* _countryNumberLabel;
	UIView* _disclosureView;
	UIView* _textFieldLeftView;
	UIImageView* _iconImageView;
	IGTextField* _phoneNumberTextField;
	NSString* _countryCode;
	NSString* _countryNumber;
	NSString* _phoneNumber;

}

@property (assign,nonatomic,__weak) id<IGChangePhoneNumberViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * countryCodeButton;                                               //@synthesize countryCodeButton=_countryCodeButton - In the implementation block
@property (nonatomic,retain) UILabel * countryCodeLabel;                                                 //@synthesize countryCodeLabel=_countryCodeLabel - In the implementation block
@property (nonatomic,retain) UILabel * countryNumberLabel;                                               //@synthesize countryNumberLabel=_countryNumberLabel - In the implementation block
@property (nonatomic,retain) UIView * disclosureView;                                                    //@synthesize disclosureView=_disclosureView - In the implementation block
@property (nonatomic,retain) UIView * textFieldLeftView;                                                 //@synthesize textFieldLeftView=_textFieldLeftView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                                                //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) IGTextField * phoneNumberTextField;                                         //@synthesize phoneNumberTextField=_phoneNumberTextField - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                                                     //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * countryNumber;                                                   //@synthesize countryNumber=_countryNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                     //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersTabBarHidden;
-(void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2 ;
-(NSString *)countryNumber;
-(void)setCountryNumber:(NSString *)arg1 ;
-(void)setupNavigationItems;
-(void)parsePhoneNumber;
-(void)nextButtonTapped;
-(IGTextField *)phoneNumberTextField;
-(UIButton *)countryCodeButton;
-(UILabel *)countryCodeLabel;
-(UIView *)disclosureView;
-(UILabel *)countryNumberLabel;
-(UIView *)textFieldLeftView;
-(void)sizeAndPositionCountryCodeButton;
-(CGRect)disclosureViewFrame;
-(void)setCountryNumberLabelAttributedTextWithLabel:(id)arg1 countryNumber:(id)arg2 ;
-(CGPoint)countryNumberLabelOrigin;
-(void)selectCountryCode;
-(void)setCountryCodeButton:(UIButton *)arg1 ;
-(void)setCountryCodeLabel:(UILabel *)arg1 ;
-(void)setCountryNumberLabel:(UILabel *)arg1 ;
-(void)setDisclosureView:(UIView *)arg1 ;
-(void)setTextFieldLeftView:(UIView *)arg1 ;
-(void)setPhoneNumberTextField:(IGTextField *)arg1 ;
-(id)initWithPhoneNumber:(id)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setDelegate:(id<IGChangePhoneNumberViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGChangePhoneNumberViewControllerDelegate>)delegate;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(NSString *)phoneNumber;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

