/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface FBAudioResourceLoader : NSObject {

	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned long _systemSoundID;

}
+(id)name;
+(id)data;
+(unsigned)version;
+(id)sharedLoader;
-(char)loadSound:(id*)arg1 ;
-(id)_fileURL:(id*)arg1 ;
-(id)_fileResourceURL;
-(void)dealloc;
-(id)init;
-(void)playSound;
@end

