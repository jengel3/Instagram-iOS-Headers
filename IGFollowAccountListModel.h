/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:41 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGFollowPeopleMegaphoneConfiguration, NSArray;

@interface IGFollowAccountListModel : NSObject {

	IGFollowPeopleMegaphoneConfiguration* _configuration;
	NSArray* _accountList;

}

@property (nonatomic,readonly) IGFollowPeopleMegaphoneConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * accountList;                                             //@synthesize accountList=_accountList - In the implementation block
+(id)followAccountListFromResponse:(id)arg1 ;
-(NSArray *)accountList;
-(id)initWithConfiguration:(id)arg1 accountList:(id)arg2 ;
-(IGFollowPeopleMegaphoneConfiguration *)configuration;
@end
