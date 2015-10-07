/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:13 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface IGFileCoordinator : NSObject {

	NSFileManager* _fileManager;
	NSURL* _filePathURL;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSURL * filePathURL;                      //@synthesize filePathURL=_filePathURL - In the implementation block
-(id)initWithFilePathURL:(id)arg1 ;
-(char)archiveObject:(id)arg1 ;
-(id)unarchiveObject;
-(id)initWithFileManager:(id)arg1 filePathURL:(id)arg2 ;
-(NSURL *)filePathURL;
-(NSFileManager *)fileManager;
@end

