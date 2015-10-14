/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:56 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectContentUpload.h>
#import <Instagram/NSCoding.h>
#import <Instagram/IGDirectContentMediaUpload.h>
#import <Instagram/IGDirectContentFirstAppearance.h>

@class NSURL, NSData, IGUploadModel, NSString;

@interface IGDirectContentPhotoUpload : IGDirectContentUpload <NSCoding, IGDirectContentMediaUpload, IGDirectContentFirstAppearance> {

	char _isFirstAppearance;
	char _useMainCameraUploadFlow;
	IGUploadModel* _uploadModel;
	NSData* _imageData;

}

@property (nonatomic,retain) NSData * imageData;                        //@synthesize imageData=_imageData - In the implementation block
@property (assign,nonatomic) char useMainCameraUploadFlow;              //@synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) IGUploadModel * uploadModel;               //@synthesize uploadModel=_uploadModel - In the implementation block
@property (assign,nonatomic) char isFirstAppearance;                    //@synthesize isFirstAppearance=_isFirstAppearance - In the implementation block
-(char)isFirstAppearance;
-(void)setIsFirstAppearance:(char)arg1 ;
-(NSURL *)cacheKeyURL;
-(char)useMainCameraUploadFlow;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(IGUploadModel *)arg1 ;
-(void)setUseMainCameraUploadFlow:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(id)contentType;
@end

