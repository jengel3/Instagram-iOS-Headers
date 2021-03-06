
#import <Instagram/IGPlainTableViewController.h>

@class NSArray, NSString;

@interface IGChangeLanguageViewController : IGPlainTableViewController {

	NSArray* _locales;
	NSString* _currentLanguage;

}

@property (nonatomic,readonly) NSArray * locales;                       //@synthesize locales=_locales - In the implementation block
@property (nonatomic,readonly) NSString * currentLanguage;              //@synthesize currentLanguage=_currentLanguage - In the implementation block
+(void)changeLocale:(id)arg1 ;
+(void)relaunchApp;
-(id)analyticsModule;
-(id)localeForIndexPath:(id)arg1 ;
-(char)isCurrentLocale:(id)arg1 ;
-(void)logLanguageChange:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(NSArray *)locales;
-(NSString *)currentLanguage;
@end

