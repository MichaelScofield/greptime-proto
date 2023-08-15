// Copyright 2023 Greptime Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        v3.21.6
// source: greptime/v1/common.proto

package v1

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type SemanticType int32

const (
	SemanticType_TAG       SemanticType = 0
	SemanticType_FIELD     SemanticType = 1
	SemanticType_TIMESTAMP SemanticType = 2
)

// Enum value maps for SemanticType.
var (
	SemanticType_name = map[int32]string{
		0: "TAG",
		1: "FIELD",
		2: "TIMESTAMP",
	}
	SemanticType_value = map[string]int32{
		"TAG":       0,
		"FIELD":     1,
		"TIMESTAMP": 2,
	}
)

func (x SemanticType) Enum() *SemanticType {
	p := new(SemanticType)
	*p = x
	return p
}

func (x SemanticType) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (SemanticType) Descriptor() protoreflect.EnumDescriptor {
	return file_greptime_v1_common_proto_enumTypes[0].Descriptor()
}

func (SemanticType) Type() protoreflect.EnumType {
	return &file_greptime_v1_common_proto_enumTypes[0]
}

func (x SemanticType) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use SemanticType.Descriptor instead.
func (SemanticType) EnumDescriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{0}
}

type ColumnDataType int32

const (
	ColumnDataType_BOOLEAN                 ColumnDataType = 0
	ColumnDataType_INT8                    ColumnDataType = 1
	ColumnDataType_INT16                   ColumnDataType = 2
	ColumnDataType_INT32                   ColumnDataType = 3
	ColumnDataType_INT64                   ColumnDataType = 4
	ColumnDataType_UINT8                   ColumnDataType = 5
	ColumnDataType_UINT16                  ColumnDataType = 6
	ColumnDataType_UINT32                  ColumnDataType = 7
	ColumnDataType_UINT64                  ColumnDataType = 8
	ColumnDataType_FLOAT32                 ColumnDataType = 9
	ColumnDataType_FLOAT64                 ColumnDataType = 10
	ColumnDataType_BINARY                  ColumnDataType = 11
	ColumnDataType_STRING                  ColumnDataType = 12
	ColumnDataType_DATE                    ColumnDataType = 13
	ColumnDataType_DATETIME                ColumnDataType = 14
	ColumnDataType_TIMESTAMP_SECOND        ColumnDataType = 15
	ColumnDataType_TIMESTAMP_MILLISECOND   ColumnDataType = 16
	ColumnDataType_TIMESTAMP_MICROSECOND   ColumnDataType = 17
	ColumnDataType_TIMESTAMP_NANOSECOND    ColumnDataType = 18
	ColumnDataType_TIME_SECOND             ColumnDataType = 19
	ColumnDataType_TIME_MILLISECOND        ColumnDataType = 20
	ColumnDataType_TIME_MICROSECOND        ColumnDataType = 21
	ColumnDataType_TIME_NANOSECOND         ColumnDataType = 22
	ColumnDataType_INTERVAL_YEAR_MONTH     ColumnDataType = 23
	ColumnDataType_INTERVAL_DAY_TIME       ColumnDataType = 24
	ColumnDataType_INTERVAL_MONTH_DAY_NANO ColumnDataType = 25
)

// Enum value maps for ColumnDataType.
var (
	ColumnDataType_name = map[int32]string{
		0:  "BOOLEAN",
		1:  "INT8",
		2:  "INT16",
		3:  "INT32",
		4:  "INT64",
		5:  "UINT8",
		6:  "UINT16",
		7:  "UINT32",
		8:  "UINT64",
		9:  "FLOAT32",
		10: "FLOAT64",
		11: "BINARY",
		12: "STRING",
		13: "DATE",
		14: "DATETIME",
		15: "TIMESTAMP_SECOND",
		16: "TIMESTAMP_MILLISECOND",
		17: "TIMESTAMP_MICROSECOND",
		18: "TIMESTAMP_NANOSECOND",
		19: "TIME_SECOND",
		20: "TIME_MILLISECOND",
		21: "TIME_MICROSECOND",
		22: "TIME_NANOSECOND",
		23: "INTERVAL_YEAR_MONTH",
		24: "INTERVAL_DAY_TIME",
		25: "INTERVAL_MONTH_DAY_NANO",
	}
	ColumnDataType_value = map[string]int32{
		"BOOLEAN":                 0,
		"INT8":                    1,
		"INT16":                   2,
		"INT32":                   3,
		"INT64":                   4,
		"UINT8":                   5,
		"UINT16":                  6,
		"UINT32":                  7,
		"UINT64":                  8,
		"FLOAT32":                 9,
		"FLOAT64":                 10,
		"BINARY":                  11,
		"STRING":                  12,
		"DATE":                    13,
		"DATETIME":                14,
		"TIMESTAMP_SECOND":        15,
		"TIMESTAMP_MILLISECOND":   16,
		"TIMESTAMP_MICROSECOND":   17,
		"TIMESTAMP_NANOSECOND":    18,
		"TIME_SECOND":             19,
		"TIME_MILLISECOND":        20,
		"TIME_MICROSECOND":        21,
		"TIME_NANOSECOND":         22,
		"INTERVAL_YEAR_MONTH":     23,
		"INTERVAL_DAY_TIME":       24,
		"INTERVAL_MONTH_DAY_NANO": 25,
	}
)

func (x ColumnDataType) Enum() *ColumnDataType {
	p := new(ColumnDataType)
	*p = x
	return p
}

func (x ColumnDataType) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (ColumnDataType) Descriptor() protoreflect.EnumDescriptor {
	return file_greptime_v1_common_proto_enumTypes[1].Descriptor()
}

func (ColumnDataType) Type() protoreflect.EnumType {
	return &file_greptime_v1_common_proto_enumTypes[1]
}

func (x ColumnDataType) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use ColumnDataType.Descriptor instead.
func (ColumnDataType) EnumDescriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{1}
}

type RequestHeader struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// The `catalog` that is selected to be used in this request.
	Catalog string `protobuf:"bytes,1,opt,name=catalog,proto3" json:"catalog,omitempty"`
	// The `schema` that is selected to be used in this request.
	Schema string `protobuf:"bytes,2,opt,name=schema,proto3" json:"schema,omitempty"`
	// The `authorization` header, much like http's authorization header.
	Authorization *AuthHeader `protobuf:"bytes,3,opt,name=authorization,proto3" json:"authorization,omitempty"`
	// The `dbname` for the request
	Dbname string `protobuf:"bytes,4,opt,name=dbname,proto3" json:"dbname,omitempty"`
	// TraceID of request
	TraceId *uint64 `protobuf:"varint,5,opt,name=trace_id,json=traceId,proto3,oneof" json:"trace_id,omitempty"`
	// SpanID of request
	SpanId *uint64 `protobuf:"varint,6,opt,name=span_id,json=spanId,proto3,oneof" json:"span_id,omitempty"`
}

func (x *RequestHeader) Reset() {
	*x = RequestHeader{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *RequestHeader) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*RequestHeader) ProtoMessage() {}

func (x *RequestHeader) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use RequestHeader.ProtoReflect.Descriptor instead.
func (*RequestHeader) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{0}
}

func (x *RequestHeader) GetCatalog() string {
	if x != nil {
		return x.Catalog
	}
	return ""
}

func (x *RequestHeader) GetSchema() string {
	if x != nil {
		return x.Schema
	}
	return ""
}

func (x *RequestHeader) GetAuthorization() *AuthHeader {
	if x != nil {
		return x.Authorization
	}
	return nil
}

func (x *RequestHeader) GetDbname() string {
	if x != nil {
		return x.Dbname
	}
	return ""
}

func (x *RequestHeader) GetTraceId() uint64 {
	if x != nil && x.TraceId != nil {
		return *x.TraceId
	}
	return 0
}

func (x *RequestHeader) GetSpanId() uint64 {
	if x != nil && x.SpanId != nil {
		return *x.SpanId
	}
	return 0
}

type ResponseHeader struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Status *Status `protobuf:"bytes,1,opt,name=status,proto3" json:"status,omitempty"`
}

func (x *ResponseHeader) Reset() {
	*x = ResponseHeader{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ResponseHeader) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ResponseHeader) ProtoMessage() {}

func (x *ResponseHeader) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ResponseHeader.ProtoReflect.Descriptor instead.
func (*ResponseHeader) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{1}
}

func (x *ResponseHeader) GetStatus() *Status {
	if x != nil {
		return x.Status
	}
	return nil
}

type Status struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Corresponding to the `StatusCode` definition of GreptimeDB
	StatusCode uint32 `protobuf:"varint,1,opt,name=status_code,json=statusCode,proto3" json:"status_code,omitempty"`
	ErrMsg     string `protobuf:"bytes,2,opt,name=err_msg,json=errMsg,proto3" json:"err_msg,omitempty"`
}

func (x *Status) Reset() {
	*x = Status{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Status) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Status) ProtoMessage() {}

func (x *Status) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Status.ProtoReflect.Descriptor instead.
func (*Status) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{2}
}

func (x *Status) GetStatusCode() uint32 {
	if x != nil {
		return x.StatusCode
	}
	return 0
}

func (x *Status) GetErrMsg() string {
	if x != nil {
		return x.ErrMsg
	}
	return ""
}

type AuthHeader struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// Types that are assignable to AuthScheme:
	//
	//	*AuthHeader_Basic
	//	*AuthHeader_Token
	AuthScheme isAuthHeader_AuthScheme `protobuf_oneof:"auth_scheme"`
}

func (x *AuthHeader) Reset() {
	*x = AuthHeader{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AuthHeader) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AuthHeader) ProtoMessage() {}

func (x *AuthHeader) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AuthHeader.ProtoReflect.Descriptor instead.
func (*AuthHeader) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{3}
}

func (m *AuthHeader) GetAuthScheme() isAuthHeader_AuthScheme {
	if m != nil {
		return m.AuthScheme
	}
	return nil
}

func (x *AuthHeader) GetBasic() *Basic {
	if x, ok := x.GetAuthScheme().(*AuthHeader_Basic); ok {
		return x.Basic
	}
	return nil
}

func (x *AuthHeader) GetToken() *Token {
	if x, ok := x.GetAuthScheme().(*AuthHeader_Token); ok {
		return x.Token
	}
	return nil
}

type isAuthHeader_AuthScheme interface {
	isAuthHeader_AuthScheme()
}

type AuthHeader_Basic struct {
	Basic *Basic `protobuf:"bytes,1,opt,name=basic,proto3,oneof"`
}

type AuthHeader_Token struct {
	Token *Token `protobuf:"bytes,2,opt,name=token,proto3,oneof"`
}

func (*AuthHeader_Basic) isAuthHeader_AuthScheme() {}

func (*AuthHeader_Token) isAuthHeader_AuthScheme() {}

type Basic struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Username string `protobuf:"bytes,1,opt,name=username,proto3" json:"username,omitempty"`
	Password string `protobuf:"bytes,2,opt,name=password,proto3" json:"password,omitempty"`
}

func (x *Basic) Reset() {
	*x = Basic{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Basic) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Basic) ProtoMessage() {}

func (x *Basic) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Basic.ProtoReflect.Descriptor instead.
func (*Basic) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{4}
}

func (x *Basic) GetUsername() string {
	if x != nil {
		return x.Username
	}
	return ""
}

func (x *Basic) GetPassword() string {
	if x != nil {
		return x.Password
	}
	return ""
}

type Token struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Token string `protobuf:"bytes,1,opt,name=token,proto3" json:"token,omitempty"`
}

func (x *Token) Reset() {
	*x = Token{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Token) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Token) ProtoMessage() {}

func (x *Token) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Token.ProtoReflect.Descriptor instead.
func (*Token) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{5}
}

func (x *Token) GetToken() string {
	if x != nil {
		return x.Token
	}
	return ""
}

type AffectedRows struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Value uint32 `protobuf:"varint,1,opt,name=value,proto3" json:"value,omitempty"`
}

func (x *AffectedRows) Reset() {
	*x = AffectedRows{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *AffectedRows) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*AffectedRows) ProtoMessage() {}

func (x *AffectedRows) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use AffectedRows.ProtoReflect.Descriptor instead.
func (*AffectedRows) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{6}
}

func (x *AffectedRows) GetValue() uint32 {
	if x != nil {
		return x.Value
	}
	return 0
}

type FlightMetadata struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	AffectedRows *AffectedRows `protobuf:"bytes,1,opt,name=affected_rows,json=affectedRows,proto3" json:"affected_rows,omitempty"`
}

func (x *FlightMetadata) Reset() {
	*x = FlightMetadata{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *FlightMetadata) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*FlightMetadata) ProtoMessage() {}

func (x *FlightMetadata) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use FlightMetadata.ProtoReflect.Descriptor instead.
func (*FlightMetadata) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{7}
}

func (x *FlightMetadata) GetAffectedRows() *AffectedRows {
	if x != nil {
		return x.AffectedRows
	}
	return nil
}

// TODO: deprecate this, and use the `ColumnDef` in region_server.proto instead
type ColumnDef struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Name              string         `protobuf:"bytes,1,opt,name=name,proto3" json:"name,omitempty"`
	Datatype          ColumnDataType `protobuf:"varint,2,opt,name=datatype,proto3,enum=greptime.v1.ColumnDataType" json:"datatype,omitempty"`
	IsNullable        bool           `protobuf:"varint,3,opt,name=is_nullable,json=isNullable,proto3" json:"is_nullable,omitempty"`
	DefaultConstraint []byte         `protobuf:"bytes,4,opt,name=default_constraint,json=defaultConstraint,proto3" json:"default_constraint,omitempty"`
}

func (x *ColumnDef) Reset() {
	*x = ColumnDef{}
	if protoimpl.UnsafeEnabled {
		mi := &file_greptime_v1_common_proto_msgTypes[8]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ColumnDef) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ColumnDef) ProtoMessage() {}

func (x *ColumnDef) ProtoReflect() protoreflect.Message {
	mi := &file_greptime_v1_common_proto_msgTypes[8]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ColumnDef.ProtoReflect.Descriptor instead.
func (*ColumnDef) Descriptor() ([]byte, []int) {
	return file_greptime_v1_common_proto_rawDescGZIP(), []int{8}
}

func (x *ColumnDef) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *ColumnDef) GetDatatype() ColumnDataType {
	if x != nil {
		return x.Datatype
	}
	return ColumnDataType_BOOLEAN
}

func (x *ColumnDef) GetIsNullable() bool {
	if x != nil {
		return x.IsNullable
	}
	return false
}

func (x *ColumnDef) GetDefaultConstraint() []byte {
	if x != nil {
		return x.DefaultConstraint
	}
	return nil
}

var File_greptime_v1_common_proto protoreflect.FileDescriptor

var file_greptime_v1_common_proto_rawDesc = []byte{
	0x0a, 0x18, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2f, 0x76, 0x31, 0x2f, 0x63, 0x6f,
	0x6d, 0x6d, 0x6f, 0x6e, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x0b, 0x67, 0x72, 0x65, 0x70,
	0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31, 0x22, 0xef, 0x01, 0x0a, 0x0d, 0x52, 0x65, 0x71, 0x75,
	0x65, 0x73, 0x74, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x12, 0x18, 0x0a, 0x07, 0x63, 0x61, 0x74,
	0x61, 0x6c, 0x6f, 0x67, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x07, 0x63, 0x61, 0x74, 0x61,
	0x6c, 0x6f, 0x67, 0x12, 0x16, 0x0a, 0x06, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x18, 0x02, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x06, 0x73, 0x63, 0x68, 0x65, 0x6d, 0x61, 0x12, 0x3d, 0x0a, 0x0d, 0x61,
	0x75, 0x74, 0x68, 0x6f, 0x72, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x18, 0x03, 0x20, 0x01,
	0x28, 0x0b, 0x32, 0x17, 0x2e, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31,
	0x2e, 0x41, 0x75, 0x74, 0x68, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x52, 0x0d, 0x61, 0x75, 0x74,
	0x68, 0x6f, 0x72, 0x69, 0x7a, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x12, 0x16, 0x0a, 0x06, 0x64, 0x62,
	0x6e, 0x61, 0x6d, 0x65, 0x18, 0x04, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x64, 0x62, 0x6e, 0x61,
	0x6d, 0x65, 0x12, 0x1e, 0x0a, 0x08, 0x74, 0x72, 0x61, 0x63, 0x65, 0x5f, 0x69, 0x64, 0x18, 0x05,
	0x20, 0x01, 0x28, 0x04, 0x48, 0x00, 0x52, 0x07, 0x74, 0x72, 0x61, 0x63, 0x65, 0x49, 0x64, 0x88,
	0x01, 0x01, 0x12, 0x1c, 0x0a, 0x07, 0x73, 0x70, 0x61, 0x6e, 0x5f, 0x69, 0x64, 0x18, 0x06, 0x20,
	0x01, 0x28, 0x04, 0x48, 0x01, 0x52, 0x06, 0x73, 0x70, 0x61, 0x6e, 0x49, 0x64, 0x88, 0x01, 0x01,
	0x42, 0x0b, 0x0a, 0x09, 0x5f, 0x74, 0x72, 0x61, 0x63, 0x65, 0x5f, 0x69, 0x64, 0x42, 0x0a, 0x0a,
	0x08, 0x5f, 0x73, 0x70, 0x61, 0x6e, 0x5f, 0x69, 0x64, 0x22, 0x3d, 0x0a, 0x0e, 0x52, 0x65, 0x73,
	0x70, 0x6f, 0x6e, 0x73, 0x65, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x12, 0x2b, 0x0a, 0x06, 0x73,
	0x74, 0x61, 0x74, 0x75, 0x73, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x13, 0x2e, 0x67, 0x72,
	0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x53, 0x74, 0x61, 0x74, 0x75, 0x73,
	0x52, 0x06, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x22, 0x42, 0x0a, 0x06, 0x53, 0x74, 0x61, 0x74,
	0x75, 0x73, 0x12, 0x1f, 0x0a, 0x0b, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x5f, 0x63, 0x6f, 0x64,
	0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0d, 0x52, 0x0a, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x43,
	0x6f, 0x64, 0x65, 0x12, 0x17, 0x0a, 0x07, 0x65, 0x72, 0x72, 0x5f, 0x6d, 0x73, 0x67, 0x18, 0x02,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x65, 0x72, 0x72, 0x4d, 0x73, 0x67, 0x22, 0x73, 0x0a, 0x0a,
	0x41, 0x75, 0x74, 0x68, 0x48, 0x65, 0x61, 0x64, 0x65, 0x72, 0x12, 0x2a, 0x0a, 0x05, 0x62, 0x61,
	0x73, 0x69, 0x63, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x12, 0x2e, 0x67, 0x72, 0x65, 0x70,
	0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x42, 0x61, 0x73, 0x69, 0x63, 0x48, 0x00, 0x52,
	0x05, 0x62, 0x61, 0x73, 0x69, 0x63, 0x12, 0x2a, 0x0a, 0x05, 0x74, 0x6f, 0x6b, 0x65, 0x6e, 0x18,
	0x02, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x12, 0x2e, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65,
	0x2e, 0x76, 0x31, 0x2e, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x48, 0x00, 0x52, 0x05, 0x74, 0x6f, 0x6b,
	0x65, 0x6e, 0x42, 0x0d, 0x0a, 0x0b, 0x61, 0x75, 0x74, 0x68, 0x5f, 0x73, 0x63, 0x68, 0x65, 0x6d,
	0x65, 0x22, 0x3f, 0x0a, 0x05, 0x42, 0x61, 0x73, 0x69, 0x63, 0x12, 0x1a, 0x0a, 0x08, 0x75, 0x73,
	0x65, 0x72, 0x6e, 0x61, 0x6d, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x08, 0x75, 0x73,
	0x65, 0x72, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x1a, 0x0a, 0x08, 0x70, 0x61, 0x73, 0x73, 0x77, 0x6f,
	0x72, 0x64, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x08, 0x70, 0x61, 0x73, 0x73, 0x77, 0x6f,
	0x72, 0x64, 0x22, 0x1d, 0x0a, 0x05, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x12, 0x14, 0x0a, 0x05, 0x74,
	0x6f, 0x6b, 0x65, 0x6e, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x05, 0x74, 0x6f, 0x6b, 0x65,
	0x6e, 0x22, 0x24, 0x0a, 0x0c, 0x41, 0x66, 0x66, 0x65, 0x63, 0x74, 0x65, 0x64, 0x52, 0x6f, 0x77,
	0x73, 0x12, 0x14, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0d,
	0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x22, 0x50, 0x0a, 0x0e, 0x46, 0x6c, 0x69, 0x67, 0x68,
	0x74, 0x4d, 0x65, 0x74, 0x61, 0x64, 0x61, 0x74, 0x61, 0x12, 0x3e, 0x0a, 0x0d, 0x61, 0x66, 0x66,
	0x65, 0x63, 0x74, 0x65, 0x64, 0x5f, 0x72, 0x6f, 0x77, 0x73, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b,
	0x32, 0x19, 0x2e, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x41,
	0x66, 0x66, 0x65, 0x63, 0x74, 0x65, 0x64, 0x52, 0x6f, 0x77, 0x73, 0x52, 0x0c, 0x61, 0x66, 0x66,
	0x65, 0x63, 0x74, 0x65, 0x64, 0x52, 0x6f, 0x77, 0x73, 0x22, 0xa8, 0x01, 0x0a, 0x09, 0x43, 0x6f,
	0x6c, 0x75, 0x6d, 0x6e, 0x44, 0x65, 0x66, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x18,
	0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x37, 0x0a, 0x08, 0x64,
	0x61, 0x74, 0x61, 0x74, 0x79, 0x70, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x1b, 0x2e,
	0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2e, 0x76, 0x31, 0x2e, 0x43, 0x6f, 0x6c, 0x75,
	0x6d, 0x6e, 0x44, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x52, 0x08, 0x64, 0x61, 0x74, 0x61,
	0x74, 0x79, 0x70, 0x65, 0x12, 0x1f, 0x0a, 0x0b, 0x69, 0x73, 0x5f, 0x6e, 0x75, 0x6c, 0x6c, 0x61,
	0x62, 0x6c, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x08, 0x52, 0x0a, 0x69, 0x73, 0x4e, 0x75, 0x6c,
	0x6c, 0x61, 0x62, 0x6c, 0x65, 0x12, 0x2d, 0x0a, 0x12, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74,
	0x5f, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x72, 0x61, 0x69, 0x6e, 0x74, 0x18, 0x04, 0x20, 0x01, 0x28,
	0x0c, 0x52, 0x11, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x72,
	0x61, 0x69, 0x6e, 0x74, 0x2a, 0x31, 0x0a, 0x0c, 0x53, 0x65, 0x6d, 0x61, 0x6e, 0x74, 0x69, 0x63,
	0x54, 0x79, 0x70, 0x65, 0x12, 0x07, 0x0a, 0x03, 0x54, 0x41, 0x47, 0x10, 0x00, 0x12, 0x09, 0x0a,
	0x05, 0x46, 0x49, 0x45, 0x4c, 0x44, 0x10, 0x01, 0x12, 0x0d, 0x0a, 0x09, 0x54, 0x49, 0x4d, 0x45,
	0x53, 0x54, 0x41, 0x4d, 0x50, 0x10, 0x02, 0x2a, 0xc6, 0x03, 0x0a, 0x0e, 0x43, 0x6f, 0x6c, 0x75,
	0x6d, 0x6e, 0x44, 0x61, 0x74, 0x61, 0x54, 0x79, 0x70, 0x65, 0x12, 0x0b, 0x0a, 0x07, 0x42, 0x4f,
	0x4f, 0x4c, 0x45, 0x41, 0x4e, 0x10, 0x00, 0x12, 0x08, 0x0a, 0x04, 0x49, 0x4e, 0x54, 0x38, 0x10,
	0x01, 0x12, 0x09, 0x0a, 0x05, 0x49, 0x4e, 0x54, 0x31, 0x36, 0x10, 0x02, 0x12, 0x09, 0x0a, 0x05,
	0x49, 0x4e, 0x54, 0x33, 0x32, 0x10, 0x03, 0x12, 0x09, 0x0a, 0x05, 0x49, 0x4e, 0x54, 0x36, 0x34,
	0x10, 0x04, 0x12, 0x09, 0x0a, 0x05, 0x55, 0x49, 0x4e, 0x54, 0x38, 0x10, 0x05, 0x12, 0x0a, 0x0a,
	0x06, 0x55, 0x49, 0x4e, 0x54, 0x31, 0x36, 0x10, 0x06, 0x12, 0x0a, 0x0a, 0x06, 0x55, 0x49, 0x4e,
	0x54, 0x33, 0x32, 0x10, 0x07, 0x12, 0x0a, 0x0a, 0x06, 0x55, 0x49, 0x4e, 0x54, 0x36, 0x34, 0x10,
	0x08, 0x12, 0x0b, 0x0a, 0x07, 0x46, 0x4c, 0x4f, 0x41, 0x54, 0x33, 0x32, 0x10, 0x09, 0x12, 0x0b,
	0x0a, 0x07, 0x46, 0x4c, 0x4f, 0x41, 0x54, 0x36, 0x34, 0x10, 0x0a, 0x12, 0x0a, 0x0a, 0x06, 0x42,
	0x49, 0x4e, 0x41, 0x52, 0x59, 0x10, 0x0b, 0x12, 0x0a, 0x0a, 0x06, 0x53, 0x54, 0x52, 0x49, 0x4e,
	0x47, 0x10, 0x0c, 0x12, 0x08, 0x0a, 0x04, 0x44, 0x41, 0x54, 0x45, 0x10, 0x0d, 0x12, 0x0c, 0x0a,
	0x08, 0x44, 0x41, 0x54, 0x45, 0x54, 0x49, 0x4d, 0x45, 0x10, 0x0e, 0x12, 0x14, 0x0a, 0x10, 0x54,
	0x49, 0x4d, 0x45, 0x53, 0x54, 0x41, 0x4d, 0x50, 0x5f, 0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10,
	0x0f, 0x12, 0x19, 0x0a, 0x15, 0x54, 0x49, 0x4d, 0x45, 0x53, 0x54, 0x41, 0x4d, 0x50, 0x5f, 0x4d,
	0x49, 0x4c, 0x4c, 0x49, 0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10, 0x10, 0x12, 0x19, 0x0a, 0x15,
	0x54, 0x49, 0x4d, 0x45, 0x53, 0x54, 0x41, 0x4d, 0x50, 0x5f, 0x4d, 0x49, 0x43, 0x52, 0x4f, 0x53,
	0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10, 0x11, 0x12, 0x18, 0x0a, 0x14, 0x54, 0x49, 0x4d, 0x45, 0x53,
	0x54, 0x41, 0x4d, 0x50, 0x5f, 0x4e, 0x41, 0x4e, 0x4f, 0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10,
	0x12, 0x12, 0x0f, 0x0a, 0x0b, 0x54, 0x49, 0x4d, 0x45, 0x5f, 0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44,
	0x10, 0x13, 0x12, 0x14, 0x0a, 0x10, 0x54, 0x49, 0x4d, 0x45, 0x5f, 0x4d, 0x49, 0x4c, 0x4c, 0x49,
	0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10, 0x14, 0x12, 0x14, 0x0a, 0x10, 0x54, 0x49, 0x4d, 0x45,
	0x5f, 0x4d, 0x49, 0x43, 0x52, 0x4f, 0x53, 0x45, 0x43, 0x4f, 0x4e, 0x44, 0x10, 0x15, 0x12, 0x13,
	0x0a, 0x0f, 0x54, 0x49, 0x4d, 0x45, 0x5f, 0x4e, 0x41, 0x4e, 0x4f, 0x53, 0x45, 0x43, 0x4f, 0x4e,
	0x44, 0x10, 0x16, 0x12, 0x17, 0x0a, 0x13, 0x49, 0x4e, 0x54, 0x45, 0x52, 0x56, 0x41, 0x4c, 0x5f,
	0x59, 0x45, 0x41, 0x52, 0x5f, 0x4d, 0x4f, 0x4e, 0x54, 0x48, 0x10, 0x17, 0x12, 0x15, 0x0a, 0x11,
	0x49, 0x4e, 0x54, 0x45, 0x52, 0x56, 0x41, 0x4c, 0x5f, 0x44, 0x41, 0x59, 0x5f, 0x54, 0x49, 0x4d,
	0x45, 0x10, 0x18, 0x12, 0x1b, 0x0a, 0x17, 0x49, 0x4e, 0x54, 0x45, 0x52, 0x56, 0x41, 0x4c, 0x5f,
	0x4d, 0x4f, 0x4e, 0x54, 0x48, 0x5f, 0x44, 0x41, 0x59, 0x5f, 0x4e, 0x41, 0x4e, 0x4f, 0x10, 0x19,
	0x42, 0x4f, 0x0a, 0x0e, 0x69, 0x6f, 0x2e, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2e,
	0x76, 0x31, 0x42, 0x06, 0x43, 0x6f, 0x6d, 0x6d, 0x6f, 0x6e, 0x5a, 0x35, 0x67, 0x69, 0x74, 0x68,
	0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x47, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x54,
	0x65, 0x61, 0x6d, 0x2f, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2d, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x2f, 0x67, 0x6f, 0x2f, 0x67, 0x72, 0x65, 0x70, 0x74, 0x69, 0x6d, 0x65, 0x2f, 0x76,
	0x31, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_greptime_v1_common_proto_rawDescOnce sync.Once
	file_greptime_v1_common_proto_rawDescData = file_greptime_v1_common_proto_rawDesc
)

func file_greptime_v1_common_proto_rawDescGZIP() []byte {
	file_greptime_v1_common_proto_rawDescOnce.Do(func() {
		file_greptime_v1_common_proto_rawDescData = protoimpl.X.CompressGZIP(file_greptime_v1_common_proto_rawDescData)
	})
	return file_greptime_v1_common_proto_rawDescData
}

var file_greptime_v1_common_proto_enumTypes = make([]protoimpl.EnumInfo, 2)
var file_greptime_v1_common_proto_msgTypes = make([]protoimpl.MessageInfo, 9)
var file_greptime_v1_common_proto_goTypes = []interface{}{
	(SemanticType)(0),      // 0: greptime.v1.SemanticType
	(ColumnDataType)(0),    // 1: greptime.v1.ColumnDataType
	(*RequestHeader)(nil),  // 2: greptime.v1.RequestHeader
	(*ResponseHeader)(nil), // 3: greptime.v1.ResponseHeader
	(*Status)(nil),         // 4: greptime.v1.Status
	(*AuthHeader)(nil),     // 5: greptime.v1.AuthHeader
	(*Basic)(nil),          // 6: greptime.v1.Basic
	(*Token)(nil),          // 7: greptime.v1.Token
	(*AffectedRows)(nil),   // 8: greptime.v1.AffectedRows
	(*FlightMetadata)(nil), // 9: greptime.v1.FlightMetadata
	(*ColumnDef)(nil),      // 10: greptime.v1.ColumnDef
}
var file_greptime_v1_common_proto_depIdxs = []int32{
	5, // 0: greptime.v1.RequestHeader.authorization:type_name -> greptime.v1.AuthHeader
	4, // 1: greptime.v1.ResponseHeader.status:type_name -> greptime.v1.Status
	6, // 2: greptime.v1.AuthHeader.basic:type_name -> greptime.v1.Basic
	7, // 3: greptime.v1.AuthHeader.token:type_name -> greptime.v1.Token
	8, // 4: greptime.v1.FlightMetadata.affected_rows:type_name -> greptime.v1.AffectedRows
	1, // 5: greptime.v1.ColumnDef.datatype:type_name -> greptime.v1.ColumnDataType
	6, // [6:6] is the sub-list for method output_type
	6, // [6:6] is the sub-list for method input_type
	6, // [6:6] is the sub-list for extension type_name
	6, // [6:6] is the sub-list for extension extendee
	0, // [0:6] is the sub-list for field type_name
}

func init() { file_greptime_v1_common_proto_init() }
func file_greptime_v1_common_proto_init() {
	if File_greptime_v1_common_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_greptime_v1_common_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*RequestHeader); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ResponseHeader); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Status); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AuthHeader); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Basic); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Token); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*AffectedRows); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*FlightMetadata); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_greptime_v1_common_proto_msgTypes[8].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ColumnDef); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_greptime_v1_common_proto_msgTypes[0].OneofWrappers = []interface{}{}
	file_greptime_v1_common_proto_msgTypes[3].OneofWrappers = []interface{}{
		(*AuthHeader_Basic)(nil),
		(*AuthHeader_Token)(nil),
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_greptime_v1_common_proto_rawDesc,
			NumEnums:      2,
			NumMessages:   9,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_greptime_v1_common_proto_goTypes,
		DependencyIndexes: file_greptime_v1_common_proto_depIdxs,
		EnumInfos:         file_greptime_v1_common_proto_enumTypes,
		MessageInfos:      file_greptime_v1_common_proto_msgTypes,
	}.Build()
	File_greptime_v1_common_proto = out.File
	file_greptime_v1_common_proto_rawDesc = nil
	file_greptime_v1_common_proto_goTypes = nil
	file_greptime_v1_common_proto_depIdxs = nil
}
