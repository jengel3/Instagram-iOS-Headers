/*
* This header is generated by classdump-dyld 0.7
* on Monday, October 26, 2015 at 9:24:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/21A1C6E8-DEFC-46E0-A287-C60E9807B6FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/AFHTTPRequestSerializer.h>

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer {

	unsigned _format;
	unsigned _writingOptions;

}

@property (assign,nonatomic) unsigned format;                      //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writingOptions;              //@synthesize writingOptions=_writingOptions - In the implementation block
+(id)serializerWithWritingOptions:(unsigned)arg1 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWritingOptions:(unsigned)arg1 ;
-(unsigned)writingOptions;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

