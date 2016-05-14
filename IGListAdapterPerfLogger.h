/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListAdapterUpdaterPerfDelegate.h>

@class NSString;

@interface IGListAdapterPerfLogger : NSObject <IGListAdapterUpdaterPerfDelegate> {

	NSString* _moduleName;

}

@property (nonatomic,readonly) NSString * moduleName;               //@synthesize moduleName=_moduleName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)moduleName;
-(void)didCompleteUpdateForListAdapterUpdater:(id)arg1 ;
-(void)listAdapterUpdater:(id)arg1 updatedWithStats:(IGListAdapterUpdaterPerfStats)arg2 ;
-(id)initWithModuleName:(id)arg1 ;
@end
