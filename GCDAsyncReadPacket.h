/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 8:04:07 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/80FB49E7-07A3-4438-9519-37CDCDE82DE6/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject {

	NSMutableData* buffer;
	unsigned startOffset;
	unsigned bytesDone;
	unsigned maxLength;
	double timeout;
	unsigned readLength;
	NSData* term;
	char bufferOwner;
	unsigned originalBufferLength;
	long tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned)arg2 maxLength:(unsigned)arg3 timeout:(double)arg4 readLength:(unsigned)arg5 terminator:(id)arg6 tag:(long)arg7 ;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned)arg1 ;
-(unsigned)optimalReadLengthWithDefault:(unsigned)arg1 shouldPreBuffer:(char*)arg2 ;
-(unsigned)readLengthForNonTermWithHint:(unsigned)arg1 ;
-(unsigned)readLengthForTermWithHint:(unsigned)arg1 shouldPreBuffer:(char*)arg2 ;
-(unsigned)readLengthForTermWithPreBuffer:(id)arg1 found:(char*)arg2 ;
-(int)searchForTermAfterPreBuffering:(long)arg1 ;
@end

