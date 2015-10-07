/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectContent.h>
#import <Instagram/NSCoding.h>

@class NSString, IGDirectShareRecipient, NSHashTable;

@interface IGDirectContentUpload : IGDirectContent <NSCoding> {

	char _isViaRealtime;
	NSString* _threadID;
	IGDirectShareRecipient* _recipient;
	float _uploadProgress;
	int _uploadStatus;
	NSString* _text;
	NSString* _uploadIndexKey;
	NSHashTable* _observers;

}

@property (nonatomic,copy,readonly) NSString * threadID;                      //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,retain) IGDirectShareRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) float uploadProgress;                            //@synthesize uploadProgress=_uploadProgress - In the implementation block
@property (assign,nonatomic) int uploadStatus;                                //@synthesize uploadStatus=_uploadStatus - In the implementation block
@property (assign,nonatomic) char isViaRealtime;                              //@synthesize isViaRealtime=_isViaRealtime - In the implementation block
@property (nonatomic,copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * uploadIndexKey;                         //@synthesize uploadIndexKey=_uploadIndexKey - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSString * contentType; 
-(NSString *)threadID;
-(NSString *)uploadIndexKey;
-(void)setUploadStatus:(int)arg1 ;
-(void)setUploadProgress:(float)arg1 ;
-(float)uploadProgress;
-(char)isViaRealtime;
-(void)setIsViaRealtime:(char)arg1 ;
-(void)setUploadIndexKey:(NSString *)arg1 ;
-(id)initWithRecipient:(id)arg1 ;
-(IGDirectShareRecipient *)recipient;
-(void)setRecipient:(IGDirectShareRecipient *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(int)uploadStatus;
-(id)digestDescription;
-(id)itemId;
-(void)removeUploadObserver:(id)arg1 ;
-(NSString *)contentType;
@end

