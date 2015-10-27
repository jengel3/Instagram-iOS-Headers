/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectContentRealtimeUploadable.h>

@class IGDirectContentUploadInfo, NSString;

@interface IGDirectLike : IGDirectContent <IGDirectContentRealtimeUploadable> {

	IGDirectContentUploadInfo* _uploadInfo;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
-(IGDirectContentUploadInfo *)uploadInfo;
-(id)contentWithItemId:(id)arg1 ;
-(id)serializedStringForRealtimeUpload;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(id)initAsUploadWithRecipient:(id)arg1 ;
-(char)isUploading;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)digestDescription;
@end

