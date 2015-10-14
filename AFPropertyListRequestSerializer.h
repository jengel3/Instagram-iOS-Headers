/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPRequestSerializer.h>

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {

	unsigned _format;
	unsigned _writeOptions;

}

@property (assign,nonatomic) unsigned format;                    //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writeOptions;              //@synthesize writeOptions=_writeOptions - In the implementation block
+(id)serializerWithFormat:(unsigned)arg1 writeOptions:(unsigned)arg2 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWriteOptions:(unsigned)arg1 ;
-(unsigned)writeOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

