
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>
#import <Instagram/IGTabSwitcherDelegate.h>

@protocol IGRetroRegistrationContactPointScrollViewDelegate;
@class IGRetroRegistrationNextButton, IGRetroRegistrationTextField, IGRetroRegistrationPhoneNumberField, IGCoreTextView, UIImageView, IGTabSwitcher, NSString;

@interface IGRetroRegistrationContactPointScrollView : UIScrollView <IGTabSwitcherDelegate> {

	IGRetroRegistrationNextButton* _nextButton;
	IGRetroRegistrationTextField* _emailField;
	IGRetroRegistrationPhoneNumberField* _phoneNumberField;
	IGCoreTextView* _termView;
	id<IGRetroRegistrationContactPointScrollViewDelegate> _contactPointScrollViewDelegate;
	UIImageView* _glyphView;
	IGTabSwitcher* _tabSwitcher;

}

@property (nonatomic,retain) UIImageView * glyphView;                                                                                  //@synthesize glyphView=_glyphView - In the implementation block
@property (nonatomic,retain) IGTabSwitcher * tabSwitcher;                                                                              //@synthesize tabSwitcher=_tabSwitcher - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationTextField * emailField;                                                                //@synthesize emailField=_emailField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationPhoneNumberField * phoneNumberField;                                                   //@synthesize phoneNumberField=_phoneNumberField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                                                               //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                                                                //@synthesize termView=_termView - In the implementation block
@property (assign,nonatomic,__weak) id<IGRetroRegistrationContactPointScrollViewDelegate> contactPointScrollViewDelegate;              //@synthesize contactPointScrollViewDelegate=_contactPointScrollViewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)IGTabSwitcher:(id)arg1 didSelectIndex:(unsigned)arg2 ;
-(IGRetroRegistrationTextField *)emailField;
-(id)createGlyphView;
-(UIImageView *)glyphView;
-(id)createTabSwitcher;
-(IGTabSwitcher *)tabSwitcher;
-(id)createPhoneNumberField;
-(id)createEmailField;
-(id)createTermView;
-(id<IGRetroRegistrationContactPointScrollViewDelegate>)contactPointScrollViewDelegate;
-(void)setPhoneNumberField:(IGRetroRegistrationPhoneNumberField *)arg1 ;
-(void)setGlyphView:(UIImageView *)arg1 ;
-(void)setTabSwitcher:(IGTabSwitcher *)arg1 ;
-(void)setContactPointScrollViewDelegate:(id<IGRetroRegistrationContactPointScrollViewDelegate>)arg1 ;
-(void)setEmailField:(IGRetroRegistrationTextField *)arg1 ;
-(IGRetroRegistrationPhoneNumberField *)phoneNumberField;
-(IGCoreTextView *)termView;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
@end

