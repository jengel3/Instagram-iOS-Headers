/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, IGRequest;

@interface IGDirectShareRecentRecipientManager : NSObject {

	NSDictionary* _recentRecipientSets;
	IGRequest* _currentRequest;

}

@property (nonatomic,retain) NSDictionary * recentRecipientSets;              //@synthesize recentRecipientSets=_recentRecipientSets - In the implementation block
@property (nonatomic,retain) IGRequest * currentRequest;                      //@synthesize currentRequest=_currentRequest - In the implementation block
+(id)sharedManager;
-(id)archivePath;
-(void)onDirectSharePosted;
-(void)onLogout;
-(void)onLogin;
-(NSDictionary *)recentRecipientSets;
-(void)unarchive;
-(void)fetchRemoteDataIfNecessary;
-(id)recentRecipientSetsFromDictionary:(id)arg1 ;
-(void)setRecentRecipientSets:(NSDictionary *)arg1 ;
-(void)clearRecipientsListInMemoryAndOnDisk;
-(void)markLocalDataAsStale;
-(id)recentRecipients;
-(float)scoreForUser:(id)arg1 ;
-(void)setCurrentRequest:(IGRequest *)arg1 ;
-(void)dealloc;
-(id)init;
-(IGRequest *)currentRequest;
-(void)fetchLocalData;
-(void)clearArchive;
-(void)archive;
@end

